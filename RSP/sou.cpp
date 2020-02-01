#include <stdio.h>
#include <stdlib.h>
#include <time.h>
double Win, Lose, Draw;
void PrintString(int n)
{
	if (n == 1)
	{
		printf("가위");
	}
	else if (n == 2)
	{
		printf("바위");
	}
	else if (n == 3)
	{
		printf("보");
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
	if (com == user) //비긴경우
	{
		printf("비겼다 !\n");
		Draw++;
		return 0;
	}
	else if ((com == 1 && user == 2) || (com == 2 && user == 3) || (com == 3 && user == 1)) // 이긴경우
	{
		printf("이겼다 !\n");
		Win++;
		return 1;
	}
	else // 진 경우
	{
		printf("졌다 !\n");
		Lose++;
		return -1;
	}
}

int main(void)
{
	int user, com;
	int a;

	printf("~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~\n");

	printf("가위바위보 게임 \n");

	printf("~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~\n");

	for (a = 1; a <= 10; a++)
	{
		printf("[%d번째 시행]", a);
		srand((unsigned)time(NULL));
		printf("가위(1), 바위 (2), 보(3):");
		com = rand() % 3 + 1;
		scanf("%d", &user);
		if (user >= 4)
		{
			printf("잘못입력했습니다 ! \n");
			a--;
			continue;
		}

		PrintMatchup(user, com);
		Decision(user, com);
	}
	printf("이긴횟수 = %1.0f, 진횟수 = %1.0f, 비긴횟수 = %1.0f \n", Win, Lose, Draw);
	printf("10전 %1.0f승 %1.0f무 %1.0f패 / 승률 = %1.0f %%", Win, Draw, Lose, (Win / 10) * 100);
	return 0;
}
