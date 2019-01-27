/*带参数的函数*/
#include <stdio.h>
void pound(int c) {
  while(c-- > 0) {
    printf("#");
  }
  printf("\n");
}
int main(void) {
  int times = 5;
  char c = '!';
  float f = 6.0f;

  pound(times);
  pound(c);
  pound(f);

  return 0;
}
