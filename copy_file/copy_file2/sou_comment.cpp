#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	FILE* src = fopen("src.txt", "rt");
	FILE* des = fopen("dst.txt", "wt");

	char str[20];

	if (src == NULL || des == NULL)
	{
		puts("파일오픈 실패!");
		return -1;
	}
	while ((fgets(str, sizeof(str), src) != NULL))//21page 참고
	//fgetc는 \n을 \n으로 인식하는 대신 \0로 인식(개행=문자열의 종료)
		fputs(str, des);//des가 가리키고 있는 곳에 출력
	   //20개 단위로 계속 읽어들임
	if (feof(src) != 0)//비정상적인 문제 or 파일의 끝에 도달?
		puts("파일복사 완료!");
	else
		puts("파일복사 실패!");
	fclose(src);
	fclose(des);
	return 0;
}
