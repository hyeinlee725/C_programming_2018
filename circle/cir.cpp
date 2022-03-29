#include <stdio.h>
#include <string.h>

struct point
{
	int xpos;
	int ypos;
};
struct circle//원을 표현하기 위한 구조체[원의 방정식: (x-a)^2+(y-b)^2=r^2]
{
	double radius;
	struct point* center;
	//구조체 안에 맴버변수로 구조체변수나 구조체 포인터 변수가 들어갈 수 있음(연결되는 구조)
};
int main()
{
	struct point cen = { 2,7 };//cen변수 선언
	double rad = 5.5;//반지름 값
	struct circle ring = { rad, &cen };//몇 byte? 12byte(double rad + *center)
	printf("원의 반지름: %g\n", ring.radius);
	printf("원의 중심[%d, %d]\n", (ring.center)->xpos, (ring.center)->ypos);
	//(*ring.center).xpos, (*ring.center).ypos 로 나타낼 수 있음
	return 0;
}