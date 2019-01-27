/*
  scanf() 输入
*/
#include <stdio.h>
int main (void) {

  char name1[11], name2[11];
  int count;
  printf("请输入name1和name2, 以空格间隔:");
  count = scanf("%10s %10s", name1, name2);
  printf("name1: %s, name2: %s", name1, name2);
}
