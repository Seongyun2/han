#include <stdio.h>
#include <stdlib.h>

void swap(int *pa, int* pb)
{
    int c = *pa;
    *pa = *pb;
    *pb = c;

}

void sort(int* arr, int len)
{
    for (int i = 0; i < 5; i++){
        int min = 999999;
        int min_idx = -1;

        for (int j = i; j < 5; j++)
        {
            int val = arr[j];
            if(val < min){
               min = val;
               min_idx = j;
                    }
        }
        swap(&arr[i], &arr[min_idx]);
    }
}

int main()
{
    int arr[5] = {5, 4, 3, 2, 1};

    for (int i = 0; i < 5; i++) printf("%d", arr[i]);
    printf("\n");

    sort(arr, 5);

    for (int i = 0; i < 5; i++) printf("%d", arr[i]);
    printf("\n");
}