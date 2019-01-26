/*复习题第八题-p214*/
#include <stdio.h>
int main (void) {
  int age = 20;
  while( age++ <= 65 ) {
    if (age % 20 == 0) {
      printf("Ok %d模20等于0\n", age);
    }
    if (age == 20) {
      printf("%d等于20\n", age);
    }
  }

  return 0;
}
