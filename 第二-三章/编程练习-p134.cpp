/*�����ϰ p1334*/
#include <stdio.h>
#define MINE 60
void mineHouse(void) {
  int mine, i;

  while(mine >= 0) {
    printf("���������������ת��ΪСʱ���ͷ��ӣ����븺����������\n");
    scanf("%d", &mine);
    printf("%d ������ %d Сʱ, %d ����\n", mine, mine / MINE, mine % MINE);
  }
}

void jiashi(void) {
  int n, maxCount;
  printf("������һ�����������ӡ���������ȴ�������10�����������е������� \n");
  scanf("%d", &n);
  maxCount = n + 10;
  while(n <= maxCount) {
    printf("%d   ", n);
    n++;
  }
}

void printfWeeks(void) {
  int day;
  while (day >=0 ) {
    printf("��������������ת��Ϊ��������������ʽ��\n");
    scanf("%d", &day);

    printf("%d����%d�ܶ�%d��\n", day, day / 7, day % 7);
  }
}

void printfLifang(double num) {
  printf("%lf", num * num * num);
}

void printfMode(void) {
  int firstNum, lastNum;
  printf("��������ģ����ĵڶ����������\n");
  scanf("%d", &lastNum);
  printf("��������ģ����ĵ�һ���������\n");
  scanf("%d", &firstNum);
  printf("%d %% %d = %d\n",firstNum, lastNum, firstNum % lastNum);
  while (firstNum >= 0) {
    printf("��������ģ����ĵ�һ���������\n");
    scanf("%d", &firstNum);
    printf("%d %% %d = %d\n",firstNum, lastNum, firstNum % lastNum);
  }
}

void Temperatures(double huashi) {
  const float shezhiTemp = 5.0 / 9.0;
  const float shezhiTempChang = 32.0;
  const float kaisheTemp = 273.16;
  printf("�����¶�Ϊ��%lf�� �����¶�Ϊ��%lf, �����¶�Ϊ��%lf\n", huashi, shezhiTemp * ( huashi - shezhiTempChang), shezhiTemp * ( huashi - shezhiTempChang) + kaisheTemp);
}

int main(void) {
  double lf, huashi;
  //mineHouse();
  // jiashi();
  // printfWeeks();
  /*printf("������һ��double����������������ֵ");
  scanf("%lf", &lf);
  printfLifang(lf);*/
  // printfMode();
  printf("�����뻪���¶ȣ���������ת��Ϊ�����¶ȺͿ����¶�\n");
  int scanfReturn = scanf("%lf", &huashi);
  while (scanfReturn == 1) {
    Temperatures(huashi);
    printf("�����뻪���¶ȣ���������ת��Ϊ�����¶ȺͿ����¶�\n");
    scanfReturn = scanf("%lf", &huashi);
  }

  return 0;
}
