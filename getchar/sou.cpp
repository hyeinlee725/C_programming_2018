#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	char name[10];
	char sex;
	int age;
	FILE* fp = fopen("friend.txt", "wt");
	int i;
	for (i = 0; i < 3; i++)//3번 실행
	{
		printf("이름 성별 나이 순 입력: ");
		scanf("%s %c %d", name, &sex, &age);//name은 배열의 이름이라 주소 안붙임, sex는 성별이니까...
		getchar();//이름 성별 나이 \n 이 입력, 입력버퍼에 '\n'이 남아있기 때문에 그것을 제거하기 위해서 사용!!!!(남아있으면 다음에 \n부터 인식)
		fprintf(fp, "%s %c %d", name, sex, age);//file에 출력->fp파링 포인터가 가리키고 있는 파일에 출력
	}
	fclose(fp);//프로그램 종료
	return 0;
}
