#include <stdio.h>

struct point
{
	int xpos;
	int ypos;
};

int main()
{
	struct point pos1 = { 1, 2 };
	struct point pos2 = { 100,200 };
	struct point* pptr = &pos1;//struct point�� *���� ����->4byte
	(*pptr).xpos += 4;//(*pptr)�� �� �ּҸ� ���󰡼� �������϶�(�� .xpos�ڸ��� �ִ� ���� +4�� �϶�)
	(*pptr).ypos += 5;//.ypos�ڸ��� �ִ� ���� +5�� �϶�-->�̹� ������ ������ '.'���
	printf("[%d, %d]\n", pptr->xpos, pptr->ypos);//����ü �ɹ��� ���ٽ� '.'���, �������� ��쿡�Ĵ� '->'(���ο�)������ ���!!
	//�����Ϳ� �ٷ� �����ϴϱ� '->'���

	pptr = &pos2;
	pptr->xpos += 1;//�����������ʰ� �ɹ��� ���ο� �����ڷ� �ٷ� ����
	pptr->ypos += 2;
	printf("[%d, %d]\n", (*pptr).xpos, (*pptr).ypos);//��Ʈ�����ڷ� ����
	return 0;
}
