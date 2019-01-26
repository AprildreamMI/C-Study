/* 使用不同类型的字符串 */
#include <stdio.h>
#define PRAISE "You are an extraordinary being"
int main(void) {
  char name[40];

  printf("What's you name?");
  scanf("%s", name);
  printf("%s, Hello \n, %s", name, PRAISE);

  return 0;
}
