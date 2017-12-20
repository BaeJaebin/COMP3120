#include<stdio.h>

int main(void)
{
	FILE *fp;

	fp = fopen("test.txt", "wt");

	if (fp == NULL){
		printf("error\n");
		return 1;
	}
	fprintf(fp, "test");

	fclose(fp);
	return 0;
}
