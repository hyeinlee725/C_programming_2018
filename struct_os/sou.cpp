#include <stdio.h>
#include <string.h>

struct point
{
	int xpos;
	int ypos;
};
struct ppp
{
	int a;
	short b;
};

struct person
{
	char name[20];//name ��ü�� �ּ�
	char phoneNum[20];
	int age;
};
//����ü ��ü�� ũ��� ������ ũ�⸦ ����غ���
int main()
{
	struct ppp a = { 1,2 };
	printf("%d\n%d\n", sizeof(struct ppp), sizeof(a));//6byte�� ���;ߵǴµ� 8byte�� ������ ����?
	//�޸𸮸� ó���� �� ���� 4byte�޸𸮷� data�� ó���ϱ� �����̴�
	//������ �ü�������� �̷��� ��(OSȯ�渶�� �ٸ�)
	return 0;
}
