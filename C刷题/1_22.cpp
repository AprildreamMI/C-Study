#include <stdio.h>
#include <math.h>
int main(void) {
  int i , n;

  printf("5 / 2 = %d\n", 5/2);
  for(i = 0; i<8; i++) {
    n = rand() % 5;
    printf("n = %d\n", n);
    switch(n) {
      case 1:
      case 3: printf("3 = %d\n", n); break;
      case 2:
      case 4: printf("4 = %d\n", n); continue;
      case 0: exit(0);
    }

    printf("for n = %d\n", n);
  }



  return 0;
}
