#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    unsigned int i;
    unsigned long long int inside_circle = 0;
    unsigned long long int total_points = 0;

    srand(time(NULL));

    for (i = 0; i <= 1000000000; i++) {
        double x = (double)rand() / RAND_MAX;
        double y = (double)rand() / RAND_MAX;

        total_points++;

        if (x*x + y*y <= 1) {
            inside_circle++;
        }

        if(i % 10000000 == 0){
            int progress_percent = ((double)i/1000000000)*100;
            printf("%d%% 진행.. ", progress_percent);
            printf("원주율 : %f ", (double)inside_circle / total_points * 4);

            printf("■");
            for(int j=1; j<=progress_percent/5; j++){
                printf("■");
            }

            for(int k=progress_percent/5+1; k<20; k++){
                printf("□");
            }

            printf("\n");
        }
    }

    printf("원주율 : %f\n", (double)inside_circle / total_points * 4);

    return 0;
}
