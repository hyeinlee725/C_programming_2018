#pragma warning (disable:4996)
#include <stdio.h>
#include <stdlib.h>
int main(void){
	FILE * fp1 = fopen("240188.raw", "rb");
	FILE * fp2 = fopen("output.txt", "wt");
	if (fp1 == NULL || fp2 == NULL) {
		printf("파일 오픈 오류\n");
		return -1;
	}
	int W = 240, H = 188;
	unsigned char temp;
	for (int i = 0; i < H; i++) {
		for (int j = 0; j < W; j++) {
			fscanf(fp1, "%c", &temp);
			if (temp >= 0 && temp < 32) fprintf(fp2, "@");
			else if (temp >= 32 && temp < 64) fprintf(fp2, "#");
			else if (temp >= 64 && temp < 96) fprintf(fp2, "M");
			else if (temp >= 96 && temp < 128) fprintf(fp2, "N");
			else if (temp >= 128 && temp < 160) fprintf(fp2, "O");
			else if (temp >= 160 && temp < 192) fprintf(fp2, "^");
			else if (temp >= 192 && temp < 224) fprintf(fp2, ".");
			else fprintf(fp2, " ");
		}
		fprintf(fp2, "\n");
	}
	fclose(fp1);
	fclose(fp2);
	return 0;
}