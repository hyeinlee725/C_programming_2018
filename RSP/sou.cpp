#include <stdio.h>
#include <stdlib.h>
#include <time.h>
double Win, Lose, Draw;
void PrintString(int n)
{
	if (n == 1)
	{
		printf("����");
	}
	else if (n == 2)
	{
		printf("����");
	}
	else if (n == 3)
	{
		printf("��");
	}
}
void PrintMatchup(int user, int com)
{
	printf("User : ");
	PrintString(user);
	printf(" vs ");
	printf("Com : ");
	PrintString(com);
	printf("\n");
}
int Decision(int user, int com)
{
	if (com == user) //�����
	{
		printf("���� !\n");
		Draw++;
		return 0;
	}
	else if ((com == 1 && user == 2) || (com == 2 && user == 3) || (com == 3 && user == 1)) // �̱���
	{
		printf("�̰�� !\n");
		Win++;
		return 1;
	}
	else // �� ���
	{
		printf("���� !\n");
		Lose++;
		return -1;
	}
}

int main(void)
{
	int user, com;
	int a;

	printf("~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~\n");

	printf("���������� ���� \n");

	printf("~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~\n");

	for (a = 1; a <= 10; a++)
	{
		printf("[%d��° ����]", a);
		srand((unsigned)time(NULL));
		printf("����(1), ���� (2), ��(3):");
		com = rand() % 3 + 1;
		scanf("%d", &user);
		if (user >= 4)
		{
			printf("�߸��Է��߽��ϴ� ! \n");
			a--;
			continue;
		}

		PrintMatchup(user, com);
		Decision(user, com);
	}
	printf("�̱�Ƚ�� = %1.0f, ��Ƚ�� = %1.0f, ���Ƚ�� = %1.0f \n", Win, Lose, Draw);
	printf("10�� %1.0f�� %1.0f�� %1.0f�� / �·� = %1.0f %%", Win, Draw, Lose, (Win / 10) * 100);
	return 0;
}
