#include <stdio.h>

int main()
{
	int ch, i;
	FILE* fp = fopen("data.txt", "rt");//rt���� r�� read, t�� txt����
	if (fp == NULL)//data.txt������ ���� �� 
	{
		puts("���Ͽ��� ����!\n");
		return -1;
	}
	for (i = 0; i < 3; i++)//�� 3�� �ݺ�
	{
		ch = fgetc(fp);//���� �ϳ��� fp�� ����Ű�� ������ �о����(���Ͽ� �ִ��� �������� ���� �ƴ�)
		printf("%c\n", ch);//ch�� 65 66 67�̶�� ���� �����
	}
	fclose(fp);
	return 0;
}
