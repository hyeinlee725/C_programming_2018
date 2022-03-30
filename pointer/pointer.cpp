#include <stdio.h>
#include <string.h>

struct point
{
	int xpos;
	int ypos;
	struct point* ptr;
	//자기자신의 포인터 타입을 맴버로 둠 == 연결할 수 있음(선, 후 관계 표현 가능)
};

int main()
{
	struct point pos1 = { 1,1 };//12byte(xpos+ypos+*ptr)
	struct point pos2 = { 2,2 };
	struct point pos3 = { 3,3 };
	pos1.ptr = &pos2;
	pos2.ptr = &pos3;
	pos3.ptr = &pos1;//순환구조를 이루고 있음

	printf("점의 연결관계...\n");
	printf("[%d, %d]와(과) [%d, %d] 연결\n", pos1.xpos, pos1.ypos, pos1.ptr->xpos, pos1.ptr->ypos);
	printf("점의 연결관계...\n");
	printf("[%d, %d]와(과) [%d, %d] 연결\n", pos2.xpos, pos2.ypos, pos2.ptr->xpos, pos2.ptr->ypos);
	printf("점의 연결관계...\n");
	printf("[%d, %d]와(과) [%d, %d] 연결\n", pos3.xpos, pos3.ypos, pos3.ptr->xpos, pos3.ptr->ypos);
	return 0;
}