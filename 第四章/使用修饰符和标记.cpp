#include <stdio.h>
#define PAGES 959
#define NAME "zhaosiasdzxc"
/*ʹ�����η��ͱ��*/
int main(void) {
 /* printf("*%d*\n", PAGES);
  printf("*%2d*\n", PAGES);
  printf("*%10d*\n", PAGES);
  printf("*%-10d*\n", PAGES);*/

  /*const double RENT = 52.99;

  printf("%f\n", RENT);
  //  �ֶο��Ϊ4, С����󾫶ȵ�2λ
  printf("%4.2f\n", RENT);
  printf("%3.1f\n", RENT);
  printf("%10.3f\n", RENT);
  printf("%10.3E\n", RENT);
  printf("%+4.3f\n", RENT);
  printf("%010.2f\n", RENT);*/

  // ��ʽ���
  /*printf("%x %X %#X\n", 31, 31 ,31);
  printf("%d %  d %+d\n", 42, 42 ,-42);
  printf("%5d %5.3d %05d, %05.3d", 6, 6, 6, 6);*/


  /*printf("[%2s]\n", NAME);
  printf("[%24s]\n", NAME);
  printf("[%24.5s]\n", NAME);
  printf("[%-24.5s]\n", NAME);*/

  printf("The %s family just may be $%5.2f", NAME, 32.235);

  return 0;
}
