#include <stdio.h>
#include <string.h>

struct point
{
	int xpos;
	int ypos;
};

struct person
{
	char name[20];//name ��ü�� �ּ�
	char phoneNum[20];
	int age;
};
int main()
{
	struct point pos = { 10, 20 };
	struct person man = { "�̽±�", "010-1212-0001", 21 };

	/*printf("%p %p\n", &pos, &pos.xpos);
	printf("%p %p\n", &man, man.name);//name ��ü�� �ּұ� ������ �ּ� ǥ�� �ʺ��̴� ���� ����!*/
	//�޸� ���� Ȯ��
	struct person* p = &man;
	char* q = (char*)p;
	for (int i = 0; i < 50; i++)
		printf("%c", *(q++));
	return 0;
}