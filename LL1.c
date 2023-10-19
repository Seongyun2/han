#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num_students;
    printf("학생 수 입력 : ");
    scanf("%d", &num_students);

    int *scores;
    scores = (int *)malloc(sizeof(int) * num_students);

    for(int i = 0; i < num_students; i++){
        printf("학생 # %d-%d 성적 입력 : ", num_students, i+1);
        scanf("%d", &scores[i]);
    }

    int sum = 0;
    for(int i = 0; i < num_students; i++) {
        sum += scores[i];
    }
    printf("총점 : %d\n", sum);

    for (int i = 0; i < num_students; i++) {
        printf("학생 # %d 성적 출력 : %d\n", i+1, scores[i]);
    }

    float average = (float)sum / num_students;
    printf("평균 점수 : %.2f\n", average);

    free(scores);

}