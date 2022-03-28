#include <stdio.h>

struct point
{
	int xpos;
	int ypos;
};

int main()
{
	struct point pos1 = { 1, 2 };
	struct point pos2 = { 100,200 };
	struct point* pptr = &pos1;//struct point의 *변수 선언->4byte
	(*pptr).xpos += 4;//(*pptr)은 그 주소를 따라가서 역참조하라(그 .xpos자리에 있는 값에 +4를 하라)
	(*pptr).ypos += 5;//.ypos자리에 있는 값에 +5를 하라-->이미 역참조 했으니 '.'사용
	printf("[%d, %d]\n", pptr->xpos, pptr->ypos);//구조체 맴버에 접근시 '.'사용, 포인터일 경우에ㅔ는 '->'(에로우)연산자 사용!!
	//포인터에 바로 접근하니까 '->'사용

	pptr = &pos2;
	pptr->xpos += 1;//역참조하지않고 맴버를 에로우 연산자로 바로 접근
	pptr->ypos += 2;
	printf("[%d, %d]\n", (*pptr).xpos, (*pptr).ypos);//도트연산자로 접근
	return 0;
}
