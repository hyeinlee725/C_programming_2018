#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main()
{
	// 1~45 ������ ���ڸ� ��ġ�� ���ھ��� 6�� random �߻�
	// �߻��� ���ڴ� �迭�� ����
	// ����ڰ� 6���� ���ڸ� �Է�(��ġ�� ���� üũ �ʿ����)
	// �� ���� �¾Ҵ��� ���
	int num[6];
	int inp[6];
	srand((unsigned)time(NULL));
	// �����߻� 6��
	for (int i = 0; i < 6; i++) {
		num[i] = rand() % 45 + 1;
		for (int j = 0; j < i; j++) {
			if (num[i] == num[j]) {
				i--;
			}
		}
	}

	// ���� �� �Է� ���� ���
	for (int i = 0; i < 6; i++) {
		printf("%d\n", num[i]);
	}
}
