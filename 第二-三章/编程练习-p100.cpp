#include <stdio.h>
#include <string.h>
void printfName(void) {
  char firstName[20];
  char lastName[20];
  int width;
  printf("������������ֺ�����: \n");

  scanf("%s %s", firstName, lastName);
  printf("\"%s,%s\"\n", lastName, firstName);
  printf("\"%20s,%20s\"\n", lastName, firstName);
  printf("\"%-20s,%-20s\"\n", lastName, firstName);
  width = strlen(firstName) + strlen(lastName) + 3;
  printf("\"%-*s,%-*s\"\n", width, lastName, width, firstName);
}

void printfFloat(void) {
  float number;
  printf("������21.3��\n");

  scanf("%f", &number);

  printf("С����ӡΪ��%+2.3f\nָ����ӡΪ��%2.2ef", number, number);
}

void printfHeightName(void) {
  char name[40];
  float height;
  printf("������������(������Ϊ��λ)������, �Զ��ŷָ���\n");
  scanf("%f, %s", &height, name);

  printf("%s, ������Ϊ: %.2fm\n", name, height / 100.0);
}

int main(void) {
    //printfName();
    //printfFloat();
    //printfHeightName();


    return 0;
}
