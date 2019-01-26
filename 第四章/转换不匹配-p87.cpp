/*转换不匹配的结果示意*/
#include <stdio.h>
#define PAGES 336
#define WORDS 65618
int main(void) {
  short num = PAGES;
  short mnum = -PAGES;
  printf("短整型和无符号短整型数： %hd, %hu\n", num, num);

  /*
    下面的结果为
    -336， 65200

    这是因为，负数数值解析成无符号类型的话
    系统使用二进制补码来代表有符号整性

    0 ~ 32767 代表他们本身
    32768 ~ 65535 da
  */
  printf("负数的短整型和无符号短整型： %hd, %hu\n", mnum, mnum);



  return 0;
}
