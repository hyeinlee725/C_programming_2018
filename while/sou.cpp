#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	char name[10];
	char sex;
	int age;
	FILE* fp = fopen("friend.txt", "rt");
	int ret;
	while (1)//���ѷ���->���� ���� ���������� break�� ���������ڴ�...
	{
		ret = fscanf(fp, "%s %c %d", name, &sex, &age);//���Ϸκ��� �Է¹ްڴ�.
		if (ret == EOF)//ret == fscanf�� ��ȯ���ִ� ��->�����̸� 0���� ū �� ��ȯ
			break;//while���̴ϱ� ������ ������ ������ ��� �ݺ�
		printf("%s %c %d\n", name, sex, age);
	}
	fclose(fp);
	return 0;
}