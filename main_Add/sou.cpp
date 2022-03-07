#pragma warning(disable:4996)
#include<stdio.h>
#include<string.h>
int power(int a, int b)
{
	int result = 1;
	if (b != 0) {
		for (int i = 0; i < b; i++)
			result *= a;//a==10
	}
	return result;
}
int main(int argc, char *argv[])//argv 배열의 정보 받음
{
	int i = 0;
	int sum = 0;
	int num1 = 0, num2 = 0;
	int len1, len2;
	len1 = strlen(argv[1]);
	len2 = strlen(argv[2]);

	// '0' == 48
	//높은자리 수부터 연산
	for (i = len1 - 1; i >= 0; i--)//배열이 0부터 시작하기 때문에 -1함 
	{
		num1 += (*(argv[1] + i) - 48) * power(10, len1 - i - 1);//포인터 연산(i)=>다음열, -48==char->int로 형변환
	}
	for (i = len2 - 1; i >= 0; i--)
	{
		num2 += (*(argv[2] + i) - 48) * power(10, len2 - i - 1);
	}
	sum = num1 + num2;
	printf("%d + %d = %d\n", num1, num2, sum);

	return 0;
}