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
	printf("%d명 학생 점수의 평균은 %lf입니다.\n", n, (double)sum / n);
	free(score);
	return 0;
}//실행되는데는 문제없지만 잘못된 부분 존재
//동적할당하면 동적할당 한 것 메모리 해제 해주어야 함(free라는 합수 사용)
//free안쓰면 운영체제에서 메모리가 계속 사용되는 것으로 간주, 그래서 사용 할 수 없음
//free안해서 메모리가 계속 묶여있는 상태 == memory leaf(메모리 누수현상) 
