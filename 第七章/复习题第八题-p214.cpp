/*��ϰ��ڰ���-p214*/
#include <stdio.h>
int main (void) {
  int age = 20;
  while( age++ <= 65 ) {
    if (age % 20 == 0) {
      printf("Ok %dģ20����0\n", age);
    }
    if (age == 20) {
      printf("%d����20\n", age);
    }
  }

  return 0;
}
