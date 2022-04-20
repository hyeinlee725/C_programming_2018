#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	char name[10];
	char sex;
	int age;
	FILE* fp = fopen("friend.txt", "rt");
	int ret;
	while (1)//무한루프->파일 끝에 도달했으면 break로 빠져나오겠다...
	{
		ret = fscanf(fp, "%s %c %d", name, &sex, &age);//파일로부터 입력받겠다.
		if (ret == EOF)//ret == fscanf가 반환해주는 값->정상이면 0보다 큰 값 반환
			break;//while문이니까 문장이 끈나기 전까지 계속 반복
		printf("%s %c %d\n", name, sex, age);
	}
	fclose(fp);
	return 0;
}