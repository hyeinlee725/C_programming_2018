#include <stdio.h>
#include <string.h>

typedef struct point
{
	int xpos;
	int ypos;
}Point;

void ShowPosition(Point pos)//구조체 type을 파라미터로 받고 있음
{
	printf("[%d, %d]\n", pos.xpos, pos.ypos);
}

Point GetCurrentPosition()//현재 좌표값 반환받아 또다시 밖으로 반환
{
	Point cen;//변수 선언
	printf("Input current pos: ");//현재 좌표를 입력하세요
	scanf("%d %d", &cen.xpos/*scanf니까 &붙임*/, &cen.ypos);//입력받음
	return cen;//밖으로 반환
}

int main()
{
	Point curPos = GetCurrentPosition();//얘가 반환해주는 값으로 초기화(5,7이 들어가고 사라짐)
	ShowPosition(curPos);
	return 0;
}
