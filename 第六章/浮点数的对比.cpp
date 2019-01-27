/*浮点数的对比 包含math.h头文件，然后使用绝对值函数 来相减对比，
如果所减的值，在于精度之中，则视为相等 p144*/
#include <math.h>
#include <stdio.h>
int main(void) {
  const double pi = 3.14156;
  double myPi;
  printf("请输入你的pi：\n");
  scanf("%lf", &myPi);

  while(fabs(pi - myPi) > 0.0001) {
    printf("请输入你的pi：\n");
    scanf("%lf", &myPi);
  }
  printf("你输入的值已经很接近正确项了\n");

/*  许多经验丰富的程序员都会把在构建比较是否相等的表达式时，都习惯把常量放在左侧    */
  return 0;
}
