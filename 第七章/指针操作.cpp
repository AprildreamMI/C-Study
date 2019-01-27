/*
  指针操作
*/
#include <stdio.h>
#define SIZE 5
int main(void) {
  int urn[5] = {100, 200, 300, 400, 500};
  int * ptr1, * ptr2, * ptr3;

  // 数组首地址赋值给指针
  ptr1 = urn;
  // 数组的第二个地址赋值给
  ptr2 = &urn[2];

  printf("获得指针的值和地址：");
  /*
   指针ptr1所指向的地址,
   指针ptr1所指向的地址的值
   指针变量ptr1的地址
  */
  printf("ptr1 = %p, *ptr1 = %d, &ptr1 = %p\n", ptr1, *ptr1, &ptr1);

  // 指针的加法
  ptr3 = ptr1 + 4;
  printf("ptr3 = %p, *ptr3 = %d\n", ptr3, *ptr3);

  // 递增指针
  ptr1++;
  printf("ptr1 = %p, *ptr1 = %d, &ptr1 = %p\n", ptr1, *ptr1, &ptr1);

  // 递减指针
  ptr2--;
  printf("ptr2 = %p, *ptr2 = %d, &ptr2 = %p\n", ptr2, *ptr2, &ptr2);


  // 恢复指针初始值
  --ptr1;
  ++ptr2;
  printf("ptr1 = %p, ptr2 = %p\n", ptr1, ptr2);

  // 一个指针去减另一个指针
  // 指针所指向的地址之间的加减
  printf("ptr1 = %p, ptr2 = %p, ptr2 - ptr1 = %ld\n", ptr1, ptr2, ptr2 - ptr1);

  // 一个指针加上一个整数
  // 指针所指向的地址之间的加减
  printf("ptr3 = %p, ptr3 - 2 = %p", ptr3, ptr3 - 2);


  return 0;
}
