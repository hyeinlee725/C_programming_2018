<2��>
#include <stdio.h>
#include <string.h>
struct person//44byte
{
	char name[20];
	char phoneNum[20];
	int age;
};
int main()
{
	struct person man1, man2;//struct type���� man1,man2���� ����
	strcpy(man1.name, "�ȼ���");//2��° �Ķ���� �Լ��� ù��° �Ķ���� �Լ��� ����->�ȼ����� man1.name�� ����
	//�ѱ��� �ѱ��ڿ� 2byte
	strcpy(man1.phoneNum, "010-1122-3344");
	man1.age = 23;
	printf("�̸��Է�:"); scanf("%s", man2.name);
	printf("��ȣ�Է�:"); scanf("%s", man2.phoneNum);
	printf("�����Է�:"); scanf("%d", &man2.age);
	printf("�̸��Է�: %s\n", man1.name);
	printf("��ȣ�Է�: %s\n", man1.phoneNum);
	printf("�����Է�: %d\n", man1.age);
	printf("�̸��Է�: %s\n", man2.name);
	printf("��ȣ�Է�: %s\n", man2.phoneNum);
	printf("�����Է�: %d\n", man2.age);
	return 0;
}