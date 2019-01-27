#include <stdio.h>
int main(void) {
/*printf() 函数也是存在返回值的
  他的返回值是 所打印字符的个数
  所有的， 包括空格和不可见的空字符
*/
  int bp2o = 212;
  int rv;

  rv = printf("%d F is water's boiling point .\n", bp2o);
  printf("返回值是： %d\n", rv);

  return 0;

}
