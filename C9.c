#include <stdio.h>

int main()
{
    int dan = 2;
    int i = 1;

    while (dan <= 9) {
        if (dan == 5) {
            dan++;
            continue;
        }

        printf("\n%d단:\n", dan);
        i = 1;

        while (i <= 9) {
            printf("%d * %d = %d\n", dan, i, dan * i);
            i++;
        }

        dan++;
    }

    return 0;
}
