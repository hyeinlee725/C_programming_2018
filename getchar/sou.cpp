#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	char name[10];
	char sex;
	int age;
	FILE* fp = fopen("friend.txt", "wt");
	int i;
	for (i = 0; i < 3; i++)//3�� ����
	{
		printf("�̸� ���� ���� �� �Է�: ");
		scanf("%s %c %d", name, &sex, &age);//name�� �迭�� �̸��̶� �ּ� �Ⱥ���, sex�� �����̴ϱ�...
		getchar();//�̸� ���� ���� \n �� �Է�, �Է¹��ۿ� '\n'�� �����ֱ� ������ �װ��� �����ϱ� ���ؼ� ���!!!!(���������� ������ \n���� �ν�)
		fprintf(fp, "%s %c %d", name, sex, age);//file�� ���->fp�ĸ� �����Ͱ� ����Ű�� �ִ� ���Ͽ� ���
	}
	fclose(fp);//���α׷� ����
	return 0;
}
