/*编程练习
  p68
*/
#include <stdio.h>

/*第二题*/
void printfAscii (void) {
  int ascii;
  printf("请输入一个ASCII妈值：");
  scanf("%d", &ascii);
  printf("你输入的ASCII码值转换为字符串为：%c", ascii);
}/*第二题*/

/*第三题*/
void printfString (void) {
  printf("\aStartled by the sudden sound, Saily shouted,\n");
  printf("\"By the Great Pumkin what that!\"");
}

/*第四题*/
void printfFloat (void) {
  float numberFloat;
  printf("请输入一个小数，接下来将以多种格式打印输出他：");
  scanf("%f", &numberFloat);
  printf("小数形式：%f\n", numberFloat);
  printf("指数形式：%e\n", numberFloat);
  printf("十六进制形式：%a\n", numberFloat);
}

/*第五题*/
void printfYearMouse(void) {
  int year;
  printf("请输入你的年龄, 程序把他转为秒数：");
  scanf("%d", &year);
  printf("%d 年有 %f 秒", year, year * 3.156e7);
}

/*第六题*/
void printfFenzi(void) {
  float kuoTuo;
  printf("请输入水的夸脱数，本程序计算其水分子的数量：");
  scanf("%f", &kuoTuo);
  double fenziCount = (kuoTuo * 950) / 3.0e-23;
  printf("%f 夸脱水，一共有 %le 个水分子", kuoTuo, fenziCount);
}

/*第七题*/
void printfHeight(void) {
  float yingcunHeight;
  printf("请输入你的身高，程序一厘米显示：");
  scanf("%f", &yingcunHeight);
  printf("%f 英寸高, %f 厘米高", yingcunHeight, yingcunHeight * 2.54f);
}

/*第八题*/
void printfBei(void) {
  float beiCount;
  printf("请输入杯数：");
  scanf("%f", &beiCount);
  printf("杯子数%f", beiCount);
  printf("品脱：%f\n", 2 / beiCount);
  printf("宙斯：%f\n", beiCount * 8);
  printf("汤勺：%f\n", (beiCount * 8) * 2);
  printf("茶勺：%f\n", ((beiCount * 8) *2) * 3);
}

int main (void) {
//  printfAscii();
//  printfString();
//  printfFloat();
//  printfYearMouse();
//  printfFenzi();
//  printfHeight();
    printfBei();
}
