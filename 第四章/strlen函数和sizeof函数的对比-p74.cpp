#include <stdio.h>
#include <string.h>
#define PRAISE "asdzxc456"
int main(void) {
  char name[40];

  printf("What's you name?\n");

  scanf("%s", name);
  printf("Hello, %s, %s\n", name, PRAISE);
  printf("你的名字长度为%zd, 有%zd, 字节长\n", strlen(name), sizeof(name));

  printf("预定义字符串长度为： %zd\n", strlen(PRAISE));
  printf("预定义字符串的字节长度为：%zd\n", sizeof(PRAISE));

  return 0;
}
