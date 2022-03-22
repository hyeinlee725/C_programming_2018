<2번>
#include <stdio.h>
#include <string.h>
struct person//44byte
{
	char name[20];
	char phoneNum[20];
	int age;
};
int main()
{
	struct person man1, man2;//struct type으로 man1,man2변수 선언
	strcpy(man1.name, "안성준");//2번째 파라미터 함수를 첫번째 파라미터 함수에 넣음->안성준을 man1.name에 넣음
	//한글은 한글자에 2byte
	strcpy(man1.phoneNum, "010-1122-3344");
	man1.age = 23;
	printf("이름입력:"); scanf("%s", man2.name);
	printf("번호입력:"); scanf("%s", man2.phoneNum);
	printf("나이입력:"); scanf("%d", &man2.age);
	printf("이름입력: %s\n", man1.name);
	printf("번호입력: %s\n", man1.phoneNum);
	printf("나이입력: %d\n", man1.age);
	printf("이름입력: %s\n", man2.name);
	printf("번호입력: %s\n", man2.phoneNum);
	printf("나이입력: %d\n", man2.age);
	return 0;
}