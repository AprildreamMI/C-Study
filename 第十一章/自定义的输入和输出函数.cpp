/*
  自定义的输入和输出函数
*/
#include <stdio.h>


void put1 (const char * string) {
  while (*string) {
    putchar(*string++);
  }
}

int put2 (const char * string) {
  int count = 0;
  while(*string) {

    putchar(*string++);
    count++;
  }

  return count;
}


int main (void) {



  return 0;
}
