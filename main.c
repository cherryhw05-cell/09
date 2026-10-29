// 09주차 프로그래밍 실습

// 실습01
#include <stdio.h> 

int main(void) {
    int grade[5];

    grade[0] = 10;
    grade[1] = 20;
    grade[2] = 30;
    grade[3] = 40;
    grade[4] = 50;
    
    for (int i=0; i<5; i++) {
        printf("grade[%i] = %i\n", i, grade[i]);
    }

    return 0;
}

