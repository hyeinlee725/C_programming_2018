#include <stdio.h>
#include <string.h>

struct point
{
	int xpos;
	int ypos;
};
struct ppp
{
	int a;
	short b;
};

struct person
{
	char name[20];//name 자체가 주소
	char phoneNum[20];
	int age;
};
//구조체 자체의 크기와 변수의 크기를 출력해보자
int main()
{
	struct ppp a = { 1,2 };
	printf("%d\n%d\n", sizeof(struct ppp), sizeof(a));//6byte가 나와야되는데 8byte가 나오는 이유?
	//메모리를 처리할 때 점부 4byte메모리로 data를 처리하기 때문이다
	//윈도우 운영체제에서는 이렇게 됨(OS환경마다 다름)
	return 0;
}
