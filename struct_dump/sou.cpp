#include <stdio.h>
#include <string.h>

struct point
{
	int xpos;
	int ypos;
};

struct person
{
	char name[20];//name 자체가 주소
	char phoneNum[20];
	int age;
};
int main()
{
	struct point pos = { 10, 20 };
	struct person man = { "이승기", "010-1212-0001", 21 };

	/*printf("%p %p\n", &pos, &pos.xpos);
	printf("%p %p\n", &man, man.name);//name 자체가 주소기 때문에 주소 표시 않붙이는 것이 맞음!*/
	//메모리 덤프 확인
	struct person* p = &man;
	char* q = (char*)p;
	for (int i = 0; i < 50; i++)
		printf("%c", *(q++));
	return 0;
}