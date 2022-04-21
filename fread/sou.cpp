#pragma warning(disable:4996)
#include <stdio.h>

typedef struct fren//구조체
{
	char name[10];//이름저장 문자 변수
	char sex;//성멸저장 문자 변수
	int age;//나이 저장 정수형 변수
}Friend;
int main()
{
	FILE* fp;
	Friend myfren1;
	Friend myfren2;
	/***file write***/
	fp = fopen("friend.bin", "wb");//.bin파일은 바이너리 형태로 저장->텍스트 형태로 보이지 않음->file에 무언갈 저장하기 위해...
	printf("이름 성별 나이 순 입력: ");
	scanf("%s %c %d", myfren1.name, &(myfren1.sex), &(myfren1.age));//&->sex, age가 일반변수니까-->15byte
	fwrite((void*)&myfren1, sizeof(myfren1), 1, fp);//통으로 15byte전체를 저장
	//myfren1의 주소를 받음, 얼만큼 저장할거냐?15바이트,몇번? 한번, 어디에?fp에다가
	fclose(fp);
	/***file read***/
	fp = fopen("friend.bin", "rb");
	fread((void*)&myfren2, sizeof(myfren2), 1, fp);//현재 파일포인터가 가리키고 있는 곳에서 차곡차곡 바이트 단위로...(?)
	printf("%s %c %d\n", myfren2.name, myfren2.sex, myfren2.age);
	fclose(fp);
	return 0;
}
