#include <stdio.h>
#include <string.h>

struct point
{
	int xpos;
	int ypos;
};
struct circle//���� ǥ���ϱ� ���� ����ü[���� ������: (x-a)^2+(y-b)^2=r^2]
{
	double radius;
	struct point* center;
	//����ü �ȿ� �ɹ������� ����ü������ ����ü ������ ������ �� �� ����(����Ǵ� ����)
};
int main()
{
	struct point cen = { 2,7 };//cen���� ����
	double rad = 5.5;//������ ��
	struct circle ring = { rad, &cen };//�� byte? 12byte(double rad + *center)
	printf("���� ������: %g\n", ring.radius);
	printf("���� �߽�[%d, %d]\n", (ring.center)->xpos, (ring.center)->ypos);
	//(*ring.center).xpos, (*ring.center).ypos �� ��Ÿ�� �� ����
	return 0;
}