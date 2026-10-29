// 09주차 프로그래밍 실습

// 실습03
#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

// int main(void) {
//     int i;
//     int grade[SIZE];
//     int score[SIZE];

//     for (i=0; i<SIZE; i++) {
//         grade[i] = rand() % 100;
//         score[i] = grade[i];
//     }

//     for (i=0; i<SIZE; i++)
//         printf("score[%d] = %d\n", i, score[i]);

//     return 0;
// }

int main(void) {
    int i;
    int a[SIZE] = {1, 2, 3, 4, 5};
    int b[SIZE] = {1, 2, 4, 5, 6};
    int flag_same = 1;

    for(i=0; i<SIZE; i++) {
        if (a[i] == b[i]) {
            flag_same++;
            printf("인덱스[%d]의 배열은 같은 값을 가집니다.\n", i);
        }
        else {
            flag_same = 0;
            printf("인덱스[%d]의 배열은 다른 값을 가집니다.\n", i);
        }
    }

    if (flag_same == 1)
        printf("same!!\n");
    else
        printf("different!!\n");

    return 0;
}