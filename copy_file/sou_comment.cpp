#pragma warning(disable:4996)
#include <stdio.h>
//���� ���縦 �����ϴ� ���α׷�
int main()
{
	FILE* src = fopen("src.txt", "rt");
	FILE* des = fopen("dst.txt", "wt");
	int ch;
	if (src == NULL || des == NULL)
	{
		puts("���Ͽ��� ����!");
		return -1;
	}
	while ((ch = fgetc(src)/*�� ��ȯ�� ���� EOF�� ������ �ƴ��� �˻�*/) != EOF)//�ٸ��� ������ ��
		fputc(ch, des);//ch�� �ִ� ���� des�����Ͱ� ����� ���Ͽ� ���! �� ���� �� while�� ����
	   //������ ���� EOF�� ��ȯ�ؼ� while���� ������ �������� �ʾƼ� Ż��!
	if (feof(src) != 0)//���������� ������� while���� �������� ������ ������ while���� �������� �Ǵ��ϴ� ��
	//feof�Լ��� �Ǵ�
		puts("���Ϻ��� �Ϸ�!");
	else
		puts("���Ϻ��� ����!");
	fclose(src);
	fclose(des);//���� �ݱ�
	return 0;
}