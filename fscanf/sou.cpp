#pragma warning(disabled:4996)
#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE*fp1 = fopen("sample.raw", "rb");//72 * 92 Byte 
	FILE*fp2 = fopen("output.txt", "wt");//txt파일로 출력 
	if (fp1 == NULL || fp2 == NULL)
	{
		printf("파일 오픈 오류\n");
		return -1;
	}//둘 중 하나라도 문제 있으면 종료 
	int W = 72, H = 92;
	unsigned char temp;
	for (int i = 0; i <H; i++)
	{
		for (int j = 0; j <W; j++)//이중 포문  
		{
			fscanf(fp1, "%c", &temp);//한 바이트를 읽어서 temp로...   
			if (temp >= 0 &&temp <32)
				fprintf(fp2, "@");
			else if (temp >= 32 &&temp <64)
				fprintf(fp2, "$");
			else if (temp >= 64 &&temp <96)
				fprintf(fp2, "#");
			else if (temp >= 96 &&temp <128)
				fprintf(fp2, "M");
			else if (temp >= 128 &&temp <160)
				fprintf(fp2, "N");
			else if (temp >= 160 &&temp <192)
				fprintf(fp2, "O");
			else if (temp >= 192 &&temp <224)
				fprintf(fp2, ";");
			else fprintf(fp2, " ");
		}
		fprintf(fp2, "\n");//총 92번 반복 
	}
	fclose(fp1);
	fclose(fp2);
	return 0;}