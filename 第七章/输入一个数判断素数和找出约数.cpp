/*找出约数， 判断素数*/
#include <stdio.h>
#include <stdbool.h>
int main(void) {
  //  输入的数, 可能的跃数
  unsigned long num, div;
  bool isPrime;

  printf("输入一个数，本程序找出他的约数并判断其是不是素数, 输入q退出：\n");
  while(scanf("%lu", &num) == 1) {
    //   约数 小于等于测试数的平方根
    for (div = 2, isPrime = false; (div * div) <= num; div++) {
      if (num % div == 0) {
        if ((div * div ) != num) {
          printf("%ld 和 %ld 是 %ld 的约数\n", div, num / div, num);
        } else {
          printf("%ld 是 %ld 的约数\n", div, num);
        }
        //  判断是否是素数 true 就不是素数 能被其他数整除
        isPrime = true;
      }
    }

    if (!isPrime) {
      printf("%ld 是素数\n", num);
    }
    printf("输入一个数，本程序找出他的约数并判断其是不是素数, 输入q退出：\n");
  }

  return 0;

}
