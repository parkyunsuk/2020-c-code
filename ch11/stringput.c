#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[20] = "java";
	char* ch = "a";

	char* ptoken = strtok(str1, ch);

	while (ptoken != NULL)
	{
		printf("%s", ptoken);
		ptoken = strtok(NULL, ch);
	}

	return 0;

}