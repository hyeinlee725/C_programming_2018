#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	long fpos;
	int i;
	//파일 생성
	FILE* fp = fopen("text.txt", "wt");
	fputs("1234-", fp);
	fclose(fp);
	//파일 개방
	fp = fopen("text.txt", "rt");
	for (i = 0; i < 4; i++)//총 4번 동작
	{//현재 파일 포인터는 1 앞에
		putchar(fgetc(fp));//1출력 파일 포인터는 2앞에
		fpos = ftell(fp);//현재 파일포인터가 가리키고 있는 위치를 long타입으로 반환, fpos에 임시로 저장
		fseek(fp, -1, SEEK_END);//파일의 제일 끝으로부터 왼쪽으로 한칸 이동한 위치
		putchar(fgetc(fp));//현재 가리키고 있는 곳에서 문자하나 얻어와서 출력
		fseek(fp, fpos, SEEK_SET);//파일의 제일 앞에서부터 fpos에 저장되어 있는 값만큼 이동
		//다시 앞으로 가서 반복(1-2-3-4- 형태로 출력)
	}
	fclose(fp);
	return 0;
}