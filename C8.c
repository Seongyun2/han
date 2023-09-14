#include <stdio.h>

int main()
{
    int count, hap = 0;

    for (count = 1; count <= 10; count++)
    {
        if (count %2 == 1){
        hap += count;
        printf("hap = %d, count = %d\n", hap, count);
        }
    }

    printf("%d\n", hap);
}