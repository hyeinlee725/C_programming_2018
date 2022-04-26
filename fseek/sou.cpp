#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	//파일 생성
	FILE* fp = fopen("text.txt", "wt");
	fputs("123456789", fp);
	fclose(fp);
	//파일 개방
	fp = fopen("text.txt", "rt");
	//SEEK_END test
	fseek(fp, -2, SEEK_END);//fseek->파일을 옮겨라
	//파일의 끝지점으로부터 2칸 앞으로 옯겨라
	//-는 앞으로 +는 뒤로!
	//현재 파일 포인터가 있는 곳에서 문자하나 읽어옴
	putchar(fgetc(fp));//putchar함수로 문자 형태로 출력
	//SEEK_SET test
	fseek(fp, 2, SEEK_SET);//파일의 제일 처음위치부터 2칸 뒤로 이동
	putchar(fgetc(fp));
	//SEEK_CUR test
	fseek(fp, 2, SEEK_CUR);//현재 파일 포인터의 위치에서 2칸 뒤로 이동
	putchar(fgetc(fp));
	fclose(fp);
	return 0;
}