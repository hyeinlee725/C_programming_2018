#pragma warning(disable:4996)
#include <stdio.h>
//파일 복사를 진행하는 프로그램
int main()
{
	FILE* src = fopen("src.txt", "rt");
	FILE* des = fopen("dst.txt", "wt");
	int ch;
	if (src == NULL || des == NULL)
	{
		puts("파일오픈 실패!");
		return -1;
	}
	while ((ch = fgetc(src)/*이 반환한 값이 EOF와 같은지 아닌지 검사*/) != EOF)//다르기 때문에 참
		fputc(ch, des);//ch에 있는 값을 des포인터가 연결된 파일에 출력! 그 다음 또 while문 실행
	   //파일의 끝은 EOF를 반환해서 while문의 조건이 충족되지 않아서 탈출!
	if (feof(src) != 0)//비정상적인 방법으로 while문이 끝난건지 파일이 끝나서 while문이 끝난건지 판단하는 문
	//feof함수로 판단
		puts("파일복사 완료!");
	else
		puts("파일복사 실패!");
	fclose(src);
	fclose(des);//파일 닫기
	return 0;
}