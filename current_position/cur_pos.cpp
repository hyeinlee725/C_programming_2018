#include <stdio.h>
#include <string.h>

typedef struct point
{
	int xpos;
	int ypos;
}Point;

void ShowPosition(Point pos)//����ü type�� �Ķ���ͷ� �ް� ����
{
	printf("[%d, %d]\n", pos.xpos, pos.ypos);
}

Point GetCurrentPosition()//���� ��ǥ�� ��ȯ�޾� �Ǵٽ� ������ ��ȯ
{
	Point cen;//���� ����
	printf("Input current pos: ");//���� ��ǥ�� �Է��ϼ���
	scanf("%d %d", &cen.xpos/*scanf�ϱ� &����*/, &cen.ypos);//�Է¹���
	return cen;//������ ��ȯ
}

int main()
{
	Point curPos = GetCurrentPosition();//�갡 ��ȯ���ִ� ������ �ʱ�ȭ(5,7�� ���� �����)
	ShowPosition(curPos);
	return 0;
}
