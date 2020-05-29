#include <stdio.h>

union data
{
	char ch;
	int cnt;
	double real;
} datal;

int main(void)
{
	union data data2 = { 'A' };
	union data data3 = data2;

	printf("%d %d\n", sizeof(union data), sizeof(data3));

	datal.ch = 'a';
	printf("%c %d %f\n", datal.ch, datal.cnt, datal.real);
	datal.cnt = 100;
	printf("%c %d %f\n", datal.ch, datal.cnt, datal.real);
	datal.real = 3.156759;
	printf("%c %d %f\n", datal.ch, datal.cnt, datal.real);

	return 0;
}