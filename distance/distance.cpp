#include <stdio.h>
#include <math.h>
struct point//구조체 정의(구조체 type의 이름: struct point-8byte)
{
	int xpos;
	int ypos;
};
int main()
{
	struct point pos1, pos2;//변수 선언
	double distance;
	fputs("point1 pos: ", stdout);//fputs == char * type, file + 모니터 출력
	scanf("%d %d", &pos1.xpos, &pos1.ypos);//pos1이라는 변수 아나에 xpos와 tpos를 각각 넣음(3 5하면 3과 5가 들어감)
	//'.'은 구조체 안에있는 변수에 접근
	fputs("point2 pos: ", stdout);
	scanf("%d %d", &pos2.xpos, &pos2.ypos);//(".")->도트 연산자

	distance = sqrt((double)((pos1.xpos - pos2.xpos) * (pos1.xpos - pos2.xpos) + (pos1.ypos - pos2.ypos) * (pos1.ypos - pos2.ypos)));
	//sqrt 그 값의 루트값을 계산해줌(math함수 정의해야 사용가능)|->두점 사이의 거리 구하기!
	printf("두 점의 거리는 %g 입니다.\n", distance);
	return 0;
}
