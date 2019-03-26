#include <stdio.h>
int main(void) {

//    int col = 5;
//    int array1[col];
//
//    for(int i = 0; i < 5; i++) {
//        array1[i] = i;
//    }
//
//    for(int i = 0; i < 5; i++) {
//        printf("array1[%d] = %d\n", i, array1[i]);
//    }

    for(int i= 0; i < 4; i++, i++) {
        for(int k = 1; k < 3; k++) {
            printf("*");
        }
    }

    return 0;
}

