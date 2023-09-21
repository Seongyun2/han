#include <stdio.h>

int main()
{
	int a;
	printf("계산할 팩토리얼 값을 입력하시오 : ");
	scanf("%d", &a);
	printf("%d! = %d", a, math(a));

	return 0;
}

int math(int a)
{
	if (a == 1) return 1;

	return a * math(a - 1);
	
}