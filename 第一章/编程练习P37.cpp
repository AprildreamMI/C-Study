/*p31 ҳ�ı����ϰ*/
#include <stdio.h>
void printfName (void);
void printfAgeDay (void);
void printfOneThree (void);
int main (void) {
  /*printfName();
  printfAgeDay();*/
  printf("starting now\n");
  printfOneThree();
  printf("end");
}
/*��һ�� ��ӡ����*/
void printfName (void) {
  printf("�� ˼\n");
  printf("��\n˼\n");
  printf("�� ˼\n");
}

/*������ת��������*/
void printfAgeDay (void) {
  int age = 22;
  int days = 0;
  int yearDays = 365;

  days = yearDays * age;

  printf("�ҵ�����Ϊ��%d, ������һ�����ˣ�%d��\n", age, days);
}

/*��ӡ one*/
void printfOne (void) {
  printf("one\n");
}

/*��ӡ two*/
void printfThree (void) {
  printf("two\n");
  printf("three\n");
}

/*��ӡ one -> three*/
void printfOneThree (void) {
  printfOne();
  printfThree();
}
