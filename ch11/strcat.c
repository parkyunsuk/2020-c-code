#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char dest[80] = "C";

	printf("%s\n", strcat(dest, " is "));
	printf("%s\n", strncat(dest, "a java", 2));// 2번째 문자인 a(띄워쓰기한 칸)까지만 연결시킴
	printf("%s\n", strcat(dest, "procedural"));
	printf("%s\n", strcat(dest, "language."));

	return 0;
}