#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	FILE * src = fopen("coin.bmp", "rb");
	FILE * des = fopen("dst.bmp", "wb");

	char buf[20];
	int readCnt;
	if (src == NULL || des == NULL)
	{
		puts("���Ͽ��� ����!");
		return -1;
	}
	while (1) {
		readCnt = fread((void*)buf, 1, sizeof(buf), src);
		if (readCnt < sizeof(buf))
		{
			if (feof(src) != 0)
			{
				fwrite((void*)buf, 1, readCnt, des);
				puts("���Ϻ��� �Ϸ�!");
				break;
			}
			else
				puts("���Ϻ��� ����!");
			break;
			fwrite((void*)buf, 1, sizeof(buf), des);
		}
	}
	fclose(src);
	fclose(des);
	return 0;
}
