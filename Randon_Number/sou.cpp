#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main()
{
	// 1~45 사이의 숫자를 겹치는 숫자없이 6개 random 발생
	// 발생된 숫자는 배열에 저장
	// 사용자가 6개의 숫자를 입력(겹치는 숫자 체크 필요없음)
	// 몇 개가 맞았는지 출력
	int num[6];
	int inp[6];
	srand((unsigned)time(NULL));
	// 랜덤발생 6개
	for (int i = 0; i < 6; i++) {
		num[i] = rand() % 45 + 1;
		for (int j = 0; j < i; j++) {
			if (num[i] == num[j]) {
				i--;
			}
		}
	}

	// 랜덤 및 입력 숫자 출력
	for (int i = 0; i < 6; i++) {
		printf("%d\n", num[i]);
	}
}
