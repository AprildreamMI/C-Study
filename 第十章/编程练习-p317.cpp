/*
  编程练习
  p317
*/
#include <stdio.h>

/*复习题  12*/
// 传统方式 trots[20]
/*void trots_fn (double arr[], int length) {
}
// 变长
void trots_fn (double [length], int length) {
}

// 传统方式
void clops_fn (short arr[][30], int row) {
}
// 变长
void clops_fn (short arr[row][col], int row, int col) {
}

// 传统方式
void shots_fn (long ar[][10][15], int n) {
}*/


void copyarr (double target_arr[], double source_arr[], int size) {

  for (int i = 0; i < size; i++) {
    target_arr[i] = source_arr[i];
  }
  for (int i = 0; i< size; i++) {
    printf("%15lf", target_arr[i]);
  }

}

void copy_ptr (double * p_target, double * p_source, int size) {

  for (int i = 0; i < size; i++, p_target++, p_source++) {
      *p_target = *p_source;
  }

  p_target -= 5;

  for (int i = 0; i< size; i++, p_target++) {
    printf("%15lf", *p_target);
  }

}

void copy_ptrs (double * p_target, double * p_source, double * end) {

  while(p_source < end) {
    *p_target = *p_source;
    printf("%15lf", *p_target);
    p_target += 1;
    p_source += 1;
    printf("11\n");
  }

  p_source -= 5;
  p_target -= 5;

  while(p_source < end) {
    printf("%15lf", *p_target);
    p_target++;
    p_source++;
  }

}


int main (void) {

  double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
  double target1[5];
  double target2[5];
  double target3[5];
  double target4[5];

//  copyarr(target1, source, 5);
//  copy_ptr(target2, source, 5);
    copy_ptrs(target3, source, source + 5);
    return 0;

}
