#include <stdio.h>

int main()
{
	int ch, i;
	FILE* fp = fopen("data.txt", "rt");//rt에서 r은 read, t는 txt파일
	if (fp == NULL)//data.txt파일이 없을 때 
	{
		puts("파일오픈 실패!\n");
		return -1;
	}
	for (i = 0; i < 3; i++)//총 3번 반복
	{
		ch = fgetc(fp);//문자 하나를 fp가 가리키는 곳에서 읽어들임(파일에 있던게 없어지는 것은 아님)
		printf("%c\n", ch);//ch에 65 66 67이라는 값이 저장됨
	}
	fclose(fp);
	return 0;
}
