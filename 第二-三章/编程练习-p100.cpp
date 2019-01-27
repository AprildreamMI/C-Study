#include <stdio.h>
#include <string.h>
void printfName(void) {
  char firstName[20];
  char lastName[20];
  int width;
  printf("请输入你的名字和姓名: \n");

  scanf("%s %s", firstName, lastName);
  printf("\"%s,%s\"\n", lastName, firstName);
  printf("\"%20s,%20s\"\n", lastName, firstName);
  printf("\"%-20s,%-20s\"\n", lastName, firstName);
  width = strlen(firstName) + strlen(lastName) + 3;
  printf("\"%-*s,%-*s\"\n", width, lastName, width, firstName);
}

void printfFloat(void) {
  float number;
  printf("请输入21.3：\n");

  scanf("%f", &number);

  printf("小数打印为：%+2.3f\n指数打印为：%2.2ef", number, number);
}

void printfHeightName(void) {
  char name[40];
  float height;
  printf("请输入你的身高(以厘米为单位)和姓名, 以逗号分隔：\n");
  scanf("%f, %s", &height, name);

  printf("%s, 你的身高为: %.2fm\n", name, height / 100.0);
}

int main(void) {
    //printfName();
    //printfFloat();
    //printfHeightName();


    return 0;
}
