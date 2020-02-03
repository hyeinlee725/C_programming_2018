#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int arr[5][5];
	int Arr[25];
	int i, j = 0, k = 0, l = 0;
	srand((unsigned)time(NULL));// 랜덤발생 25(=5*5)개

	for (i = 0; i < 25; i++)
	{
		Arr[i] = rand() % 50 + 1;
		for (j = 0; j < i; j++)
		{
			if (Arr[i] == Arr[j])
			{
				i--;
				continue;
			}
		}
		j = 0;
	}

	// 2차원 배열에 대입
	for (i = 0; i < 25; i++)
	{
		if (i / 5 == l)
		{
			arr[j][k] = Arr[i];
			k++;
			if (k == 5)
			{
				k = 0;
				l++;
				j++;
			}
		}
	}

	printf("~*~*~BINGO GAME~*~*~\n");
	//  숫자 출력
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%3d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}