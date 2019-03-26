#include <stdio.h>
int main(void) {

  char str[][20] = {"One*World", "One*Dream! "}, *p = str[1];

  printf("%s\n", p);

  return 0;
}
