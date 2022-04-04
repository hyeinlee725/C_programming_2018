#include <stdio.h>
#include <string.h>
//2차원 평면의 좌표를 가지고 원점대칭 이동시키는 함수
typedef struct point
{
	int xpos;
	int ypos;
}Point;

void OrgSymTrans(Point* ptr)//원점 대칭이동으로 바꿔주는 함수(4byte)
{
	ptr->xpos = (ptr->xpos) * -1;//에로우 연산자 사용(다이렉트로 접근)(ptr이 주소이기 때문)\
    //(*ptr).xpos = (*ptr).xpos * -1(위에와 같은 의미)
	ptr->ypos = (ptr->ypos) * -1;
}

void ShowPosition(Point pos)//현재위치 출력
{
	printf("[%d, %d]\n", pos.xpos, pos.ypos);//call-by-reference로 받음
}

int main()
{
	Point pos = { 7,-5 };//값을 초기화
	OrgSymTrans(&pos);//call-by reference(파라미터로 전달한 값이 바뀔 가능성이 있으면 사용!!!!!)로 넘김(주소를 넘김)
	//call-by-value로 하면 원하는 값을 얻을 수 없음
	ShowPosition(pos);
	OrgSymTrans(&pos);//다시 원점대칭 시켜서 원상복귀 시킴
	ShowPosition(pos);
	return 0;
}