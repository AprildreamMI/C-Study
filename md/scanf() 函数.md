### scanf() 函数

> 返回成功读取项的数量

#### 跳过空白匹配

scanf() 函数使用空白（换行符，制表符合空格）把输入分成多个字段，再一次把转换说明和字段匹配时跳过空白，

#### scanf()读取一个%d整数的过程

##### 假设scanf() 根据%d的转换说明读取一个整数，

+ scanf()每次读取一个字符，跳过所有的空白字符，直到遇到第一个非空白字符才开始读取
+ 因要读取整数，所以scanf()希望发现一个数字字符或者一个符号[+、-]
+ 如果找到一个字符是数字，它便保存改数字并读取下一个字符，不断的读取和保存字符，直至遇到非数字的字符
+ 如果遇到一个非数字的字符，它便认为读取到了整数的结尾，
+ 然后，scanf() 把非数字字符放回输入
+ 这意味着程序下一次读取输入时，首先读到的是上一次读取丢弃的非数字字符
+ 最后，scanf() 计算已读取数字的相应数值，并将计算后的值放入指定的变量中

#### scnaf()和printf()中*的使用

> 在printf()中使用通过变量定义输出的字段宽度

```
#include <stdio.h>
int main(void) {
  unsigned width, precision;
  int number = 256;
  double weight = 242.5;

  printf("请输入字段宽度：\n");
  scanf("%d", &width);
  printf("number:%*d\n", width, number);

  printf("请输入字段宽度和小数点精度：\n");
  scanf("%d %d",&width, &precision);
  printf("Weight = %*.*f\n", width, precision, weight);


  return 0;
}
```

> scanf() 中使用，则为定义了*的转换格式跳过

```
  int n;
  printf("程序会跳过两个输入，使用最后一个输入赋值给n：");

  scanf("%*d %*d %d", &n);
  printf("N的值为: %d", n);
```

