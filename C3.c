#include <stdio.h>
int main(void)
{
	int val_1, val_2, a, b;
	printf("a = 10 , b = 15일 때\n");

	a = 10;
	b = 15;

	val_1 = ++a + b--;

	printf("1. val_1 = a++ + b-- = %d, a=%d, b=%d", val_1, a, b);

	return 0;
}