#pragma warning(disable:4996)
#include <stdio.h>

typedef struct fren//����ü
{
	char name[10];//�̸����� ���� ����
	char sex;//�������� ���� ����
	int age;//���� ���� ������ ����
}Friend;
int main()
{
	FILE* fp;
	Friend myfren1;
	Friend myfren2;
	/***file write***/
	fp = fopen("friend.bin", "wb");//.bin������ ���̳ʸ� ���·� ����->�ؽ�Ʈ ���·� ������ ����->file�� ���� �����ϱ� ����...
	printf("�̸� ���� ���� �� �Է�: ");
	scanf("%s %c %d", myfren1.name, &(myfren1.sex), &(myfren1.age));//&->sex, age�� �Ϲݺ����ϱ�-->15byte
	fwrite((void*)&myfren1, sizeof(myfren1), 1, fp);//������ 15byte��ü�� ����
	//myfren1�� �ּҸ� ����, ��ŭ �����Ұų�?15����Ʈ,���? �ѹ�, ���?fp���ٰ�
	fclose(fp);
	/***file read***/
	fp = fopen("friend.bin", "rb");
	fread((void*)&myfren2, sizeof(myfren2), 1, fp);//���� ���������Ͱ� ����Ű�� �ִ� ������ �������� ����Ʈ ������...(?)
	printf("%s %c %d\n", myfren2.name, myfren2.sex, myfren2.age);
	fclose(fp);
	return 0;
}
