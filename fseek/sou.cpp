#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	//���� ����
	FILE* fp = fopen("text.txt", "wt");
	fputs("123456789", fp);
	fclose(fp);
	//���� ����
	fp = fopen("text.txt", "rt");
	//SEEK_END test
	fseek(fp, -2, SEEK_END);//fseek->������ �Űܶ�
	//������ ���������κ��� 2ĭ ������ ���ܶ�
	//-�� ������ +�� �ڷ�!
	//���� ���� �����Ͱ� �ִ� ������ �����ϳ� �о��
	putchar(fgetc(fp));//putchar�Լ��� ���� ���·� ���
	//SEEK_SET test
	fseek(fp, 2, SEEK_SET);//������ ���� ó����ġ���� 2ĭ �ڷ� �̵�
	putchar(fgetc(fp));
	//SEEK_CUR test
	fseek(fp, 2, SEEK_CUR);//���� ���� �������� ��ġ���� 2ĭ �ڷ� �̵�
	putchar(fgetc(fp));
	fclose(fp);
	return 0;
}