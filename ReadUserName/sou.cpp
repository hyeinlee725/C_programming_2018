#pragma warning(disabled:1996)
#include <stdio.h>
#include <stdlib.h>

char* ReadUserName(void)
{
	char* name = (char*)malloc(sizeof(char) * 30);
	printf("What's your name?");
	gets_s(name, 30);
	return name;
}

int main()
{
	char* name1;
	char* name2;
	name1 = ReadUserName();
	printf("name1: %s\n", name1);
	name2 = ReadUserName();
	printf("name2: %s\n", name2);
	printf("again name1: %s\n", name1);
	printf("again name2: %s\n", name2);
	free(name1);
	free(name2);
	return 0;
}