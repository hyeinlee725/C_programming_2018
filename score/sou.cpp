#pragma warning(disabled:1996)
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;
	int* score;
	printf("몇 명의 점수를 입력하시겠습니까?");
	scanf("%d", &n);
	score = (int*)malloc(sizeof(int) * n);//malloc을 int*타입으로 강제 형변환->아래와 같은 표현
	//int score[n];     
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		printf("%d번째 학생의 점수 입력: ", i + 1);
		scanf("%d", &score[i]);
		sum += score[i];
	}
	printf("%d명 학생 점구의 평균은 %lf입니다.\n", n, (double)sum / n);
	return 0;
}