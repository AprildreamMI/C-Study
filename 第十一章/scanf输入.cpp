/*
  scanf() ����
*/
#include <stdio.h>
int main (void) {

  char name1[11], name2[11];
  int count;
  printf("������name1��name2, �Կո���:");
  count = scanf("%10s %10s", name1, name2);
  printf("name1: %s, name2: %s", name1, name2);
}
