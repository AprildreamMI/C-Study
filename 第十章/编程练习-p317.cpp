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

void prntfMaxInt (double arr[], int size) {
  double max = 0;
  for (int i = 0; i < size; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }

  printf("最大值为：%10lf\n", max);
}

void prntfMaxIndex (double arr[], int size) {
  double max = 0;
  int index;
  for (int i = 0; i < size; i++) {
    if (arr[i] > max) {
      max = arr[i];
      index = i;
    }
  }

  printf("最大值为：%10lf, 下标为：%d\n", max, index);
}

void prntfMaxMinCha (double arr[], int size) {
  double max = 0;
  double min = 10000.00;
  int index;
  for (int i = 0; i < size; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
    if (arr[i] < min) {
      min = arr[i];
    }
  }

  printf("最大值为：%10lf, 最小值为：%10lf, 差为：%lf\n", max, min, (max - min));
}

void fanzhuanArray (double arr[], int size) {
  double temp = 0.00;
  for (int i = 0; i < size / 2; i++) {
    temp = arr[i];
    arr[i] = arr[size - i - 1];
    arr[size - i - 1] = temp;
  }

  for (int i = 0; i < size; i++) {
    printf("%lf\n", arr[i]);
  }

}

void copy_11 (int row1, int col1, double source_11[][5], int row2, int col2, double target_11[][5]) {
  for (int i = 0; i < row1; i++) {
    for (int j = 0; j < col1; j++) {
      target_11[i][j] = source_11[i][j];
    }
  }
}

void printf_copy (int row1, int col1, double source_11[][5], int row2, int col2, double target_11[][5]) {
    for (int i = 0; i < row1; i++) {
      for (int j = 0; j < col1; j++) {
          printf("%15lf", source_11[i][j]);
      }
      printf("\n");
    }

    printf("=======================================================\n");

    for (int i = 0; i < row1; i++) {
      for (int j = 0; j < col1; j++) {
          printf("%15lf", target_11[i][j]);
      }
      printf("\n");
    }

}


void duiyingjia (int arr1[], int arr2[], int arr3[], int size) {
  for (int i = 0; i < size; i++) {
    arr3[i] = arr1[i] + arr2[i];
  }

  for (int i = 0; i < size; i++) {
    printf("%5d", arr3[i]);
  }
}


void scanf_arr (double arr[][5]) {
  printf("请输入十五个数，每个数按回车确认输入：");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 5; j++) {
      scanf("%lf", &arr[i][j]);
    }
  }
}

double zu_pinjun (double arr[]) {
  double total = 0.00;
  for (int i = 0; i < 3; i++) {
    total += arr[i];
  }

  return total / 5;
}

double all_pinjun (double arr[][5]) {
  double total = 0.00;
  for (int i = 0; i < 3; i++) {
    for (int j =0; j < 5; j++) {
      total += arr[i][j];
    }
  }

  printf("所有的数据的平均值为：%10lf\n", total / 15);
  return total / 15;
}


double max_double_num (double arr[][5]) {
  double max = 0.00;
  for (int i = 0; i < 3; i++) {
    for (int j =0; j < 5; j++) {
      if (arr[i][j] > max) {
        max = arr[i][j];
      }
    }
  }
  printf("这组数的最大值为：%lf\n", max);
  return max;
}

int main (void) {

  double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
  double target1[5];
  double target2[5];
  double target3[5];
  double target4[5];

  int size = 4;
  int arr1[size] = {2, 4, 5, 8};
  int arr2[size] = {1, 0, 4, 6};
  int arr3[size];

  int row1 = 3, col1 = 5, row2 = 3, col2 = 5;

  double source_11[row1][5] = {
    {1.1, 2.2, 3.3, 4.4, 5.5},
    {1.2, 2.3, 3.4, 4.5, 5.6},
    {1.3, 2.4, 3.5, 4.6, 5.7}
  };
  double target_11[row2][5];

  double source_13[3][5];

//  copyarr(target1, source, 5);
//  copy_ptr(target2, source, 5);
//  copy_ptrs(target3, source, source + 5);

//  prntfMaxInt(source, 5);
//  prntfMaxIndex(source, 5);
//  prntfMaxMinCha(source, 5);
//  fanzhuanArray(source, 5);

//  copy_11 (row1, col1, source_11, row2, col2, target_11);
//  printf_copy (row1, col1, source_11, row2, col2, target_11);

//  duiyingjia (arr1, arr2, arr3, size);

    scanf_arr (source_13);

    for (int i = 0; i < 3; i++) {
      printf("第一%d组5个数的平均值为：%lf\n", i, zu_pinjun (source_13[i]));
    }

    double all_pinjun_num = all_pinjun (source_13);

    double max_num = max_double_num (source_13);



    return 0;

}
