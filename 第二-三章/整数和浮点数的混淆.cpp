#include <stdio.h>
int main(void) {
  float n1 = 3.0;
  double n2= 3.0;

  long n3 = 2000000000;
  long n4 = 1234567890;

  /*
    3.0e+00, 3.0e+00, 无意义，无意义
    float 在printf() 函数打印时, 会自动转换成double 类型, 所以两者的打印结果相同
   */
  printf("%.le, %.le, %.le, %.le\n", n1, n2, n3, n4);

  printf("%ld, %ld\n", n3, n4);

  /*  还存在另外一种情况

      因为printf()按照转换格式相应的栈区读取数值
      所以按照顺序
      n1：8字节
      n2：8字节
      n3：4字节
      n4：4字节
      printf 首先读取第一个转换说明 %ld 读取4字节，但是n1是8字节 所以读取到的是n1的前半部分
      printf 其次读取第二个转换说明 %ld 读取4字节，但是n1是8字节 所以读取到的是n1的后半部分
      printf 然后读取第三个转换说明 %ld 读取4字节，但是n2是8字节 所以读取到的是n2的前半部分
      printf 然后读取第四个转换说明 %ld 读取4字节，但是n2是8字节 所以读取到的是n2的后半部分

      所以，n3, n4 就这样读错了

  */
  printf("%ld, %ld, %ld, %ld\n", n1, n2, n3, n4);


  return 0;
}
