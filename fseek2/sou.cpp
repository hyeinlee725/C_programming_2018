#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	long fpos;
	int i;
	//���� ����
	FILE* fp = fopen("text.txt", "wt");
	fputs("1234-", fp);
	fclose(fp);
	//���� ����
	fp = fopen("text.txt", "rt");
	for (i = 0; i < 4; i++)//�� 4�� ����
	{//���� ���� �����ʹ� 1 �տ�
		putchar(fgetc(fp));//1��� ���� �����ʹ� 2�տ�
		fpos = ftell(fp);//���� ���������Ͱ� ����Ű�� �ִ� ��ġ�� longŸ������ ��ȯ, fpos�� �ӽ÷� ����
		fseek(fp, -1, SEEK_END);//������ ���� �����κ��� �������� ��ĭ �̵��� ��ġ
		putchar(fgetc(fp));//���� ����Ű�� �ִ� ������ �����ϳ� ���ͼ� ���
		fseek(fp, fpos, SEEK_SET);//������ ���� �տ������� fpos�� ����Ǿ� �ִ� ����ŭ �̵�
		//�ٽ� ������ ���� �ݺ�(1-2-3-4- ���·� ���)
	}
	fclose(fp);
	return 0;
}