#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	FILE* src = fopen("src.txt", "rt");
	FILE* des = fopen("dst.txt", "wt");

	char str[20];

	if (src == NULL || des == NULL)
	{
		puts("���Ͽ��� ����!");
		return -1;
	}
	while ((fgets(str, sizeof(str), src) != NULL))//21page ����
	//fgetc�� \n�� \n���� �ν��ϴ� ��� \0�� �ν�(����=���ڿ��� ����)
		fputs(str, des);//des�� ����Ű�� �ִ� ���� ���
	   //20�� ������ ��� �о����
	if (feof(src) != 0)//���������� ���� or ������ ���� ����?
		puts("���Ϻ��� �Ϸ�!");
	else
		puts("���Ϻ��� ����!");
	fclose(src);
	fclose(des);
	return 0;
}
