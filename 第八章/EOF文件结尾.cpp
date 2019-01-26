/*EOFÎÄ¼ş½áÎ²*/
#include <stdio.h>
int main(void) {
  char ch;
  int count_file;
  while((ch = getchar()) != EOF) {
    count_file++;
  }

  printf("%d", count_file);
  return 0;
}
