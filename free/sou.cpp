#pragma warning(disabled:1996)
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;
	int* score;
	printf("�� ���� ������ �Է��Ͻðڽ��ϱ�?");
	scanf("%d", &n);
	score = (int*)malloc(sizeof(int) * n);//malloc�� int*Ÿ������ ���� ����ȯ->�Ʒ��� ���� ǥ��
	//int score[n];     
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		printf("%d��° �л��� ���� �Է�: ", i + 1);
		scanf("%d", &score[i]);
		sum += score[i];
	}
	printf("%d�� �л� ������ ����� %lf�Դϴ�.\n", n, (double)sum / n);
	free(score);
	return 0;
}//����Ǵµ��� ���������� �߸��� �κ� ����
//�����Ҵ��ϸ� �����Ҵ� �� �� �޸� ���� ���־�� ��(free��� �ռ� ���)
//free�Ⱦ��� �ü������ �޸𸮰� ��� ���Ǵ� ������ ����, �׷��� ��� �� �� ����
//free���ؼ� �޸𸮰� ��� �����ִ� ���� == memory leaf(�޸� ��������) 
