#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
    FILE* src = fopen("coin.bmp", "rb");
    FILE* des = fopen("dst.bmp", "wb");

    char buf[20];
    int readCnt;
    if (src == NULL || des == NULL)
    {
        puts("���Ͽ��� ����!");
        return -1;
    }
    while (1) {
        readCnt/*(20���� �������� ���ִ�==���� �����ߴ�)*/
            = fread((void*)buf, 1, sizeof(buf), src);//20byte��ŭ �������� �о ����
                         //���Ͽ��� �о�ͼ� ������ ��ġ = buf(���� ����ȯ�ؼ� ����->fread�Լ��� void*Ÿ���̱� ����),
                         //1����Ʈ ������, 20���о�ٰ� buf�� ����, src�����Ͱ� ����Ű�� �ִ� ������
        if (readCnt < sizeof(buf))//������
        {
            if (feof(src) != 0)//���ϳ��� �����ߴ��� Ȯ��
            {
                fwrite((void*)buf, 1, readCnt, des);// , 1byte ������,readCnt�� ��ŭ, des�� ����Ű�� �ִ� ���Ͽ� ����
                puts("���Ϻ��� �Ϸ�!");
                break;//while���� �������´�
            }
            else
                puts("���Ϻ��� ����!");
            break;
            fwrite((void*)buf, 1, sizeof(buf), des);//���������� ���
        }
    }
    fclose(src);
    fclose(des);
    return 0;
}