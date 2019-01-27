/*ÀàÐÍ×ª»» - p125*/
#include <stdio.h>
int main(void) {
  char ch;
  int i;
  float fl;
  fl =i = ch ='C';
  //  C 67, 67.00
  printf("ch = %c, i = %d, fl = %2.2f\n", ch, i, fl);

  // 68
  ch = ch +1;
  // 203
  i = fl + 2 *ch;
  fl = 2.0 * ch + i;
  // D , 203, 339.00
  printf("ch = %c, i = %d, fl = %2.2f\n", ch, i, fl);
  ch = 1107;
  // S
  printf("Now ch = %c\n", ch);
  ch = 80.89;
  // P
  printf("Now ch = %c\n", ch);

}
