#include <stdio.h>
#include <string.h>
//2���� ����� ��ǥ�� ������ ������Ī �̵���Ű�� �Լ�
typedef struct point
{
	int xpos;
	int ypos;
}Point;

void OrgSymTrans(Point* ptr)//���� ��Ī�̵����� �ٲ��ִ� �Լ�(4byte)
{
	ptr->xpos = (ptr->xpos) * -1;//���ο� ������ ���(���̷�Ʈ�� ����)(ptr�� �ּ��̱� ����)\
    //(*ptr).xpos = (*ptr).xpos * -1(������ ���� �ǹ�)
	ptr->ypos = (ptr->ypos) * -1;
}

void ShowPosition(Point pos)//������ġ ���
{
	printf("[%d, %d]\n", pos.xpos, pos.ypos);//call-by-reference�� ����
}

int main()
{
	Point pos = { 7,-5 };//���� �ʱ�ȭ
	OrgSymTrans(&pos);//call-by reference(�Ķ���ͷ� ������ ���� �ٲ� ���ɼ��� ������ ���!!!!!)�� �ѱ�(�ּҸ� �ѱ�)
	//call-by-value�� �ϸ� ���ϴ� ���� ���� �� ����
	ShowPosition(pos);
	OrgSymTrans(&pos);//�ٽ� ������Ī ���Ѽ� ���󺹱� ��Ŵ
	ShowPosition(pos);
	return 0;
}