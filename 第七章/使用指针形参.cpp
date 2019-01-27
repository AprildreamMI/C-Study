/*
  使用指针传递数组首地址和尾部地址
*/
#include <stdio.h>
#define SIZE 10

/*
  通过指针传递数组的首地址和尾地址
*/
int sump (int * start, int * end) {
  int total = 0;
  // 从首地址开始遍历到尾地址
  while (start < end) {
    total += *start;
    // 每次自增地址
    start++;
  }

  return total;
}

int main (void) {
  int mar_array[SIZE] = {20, 10, 5, 39, 4, 16, 19, 26, 31, 20};
  long answer;

  // 传入数组首地址, 和 数组大小
  answer = sump(mar_array, mar_array + SIZE);

  // 数组元素之和
  printf("数组元素之和：%ld\n", answer);
  // 40 字节
  // 数组中每个元素的字节大小
  printf("数组的总字节大小：%u\n", sizeof(mar_array));
}
