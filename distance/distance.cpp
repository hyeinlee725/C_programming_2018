#include <stdio.h>
#include <math.h>
struct point//����ü ����(����ü type�� �̸�: struct point-8byte)
{
	int xpos;
	int ypos;
};
int main()
{
	struct point pos1, pos2;//���� ����
	double distance;
	fputs("point1 pos: ", stdout);//fputs == char * type, file + ����� ���
	scanf("%d %d", &pos1.xpos, &pos1.ypos);//pos1�̶�� ���� �Ƴ��� xpos�� tpos�� ���� ����(3 5�ϸ� 3�� 5�� ��)
	//'.'�� ����ü �ȿ��ִ� ������ ����
	fputs("point2 pos: ", stdout);
	scanf("%d %d", &pos2.xpos, &pos2.ypos);//(".")->��Ʈ ������

	distance = sqrt((double)((pos1.xpos - pos2.xpos) * (pos1.xpos - pos2.xpos) + (pos1.ypos - pos2.ypos) * (pos1.ypos - pos2.ypos)));
	//sqrt �� ���� ��Ʈ���� �������(math�Լ� �����ؾ� ��밡��)|->���� ������ �Ÿ� ���ϱ�!
	printf("�� ���� �Ÿ��� %g �Դϴ�.\n", distance);
	return 0;
}
