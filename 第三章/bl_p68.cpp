/*�����ϰ
  p68
*/
#include <stdio.h>

/*�ڶ���*/
void printfAscii (void) {
  int ascii;
  printf("������һ��ASCII��ֵ��");
  scanf("%d", &ascii);
  printf("�������ASCII��ֵת��Ϊ�ַ���Ϊ��%c", ascii);
}/*�ڶ���*/

/*������*/
void printfString (void) {
  printf("\aStartled by the sudden sound, Saily shouted,\n");
  printf("\"By the Great Pumkin what that!\"");
}

/*������*/
void printfFloat (void) {
  float numberFloat;
  printf("������һ��С�������������Զ��ָ�ʽ��ӡ�������");
  scanf("%f", &numberFloat);
  printf("С����ʽ��%f\n", numberFloat);
  printf("ָ����ʽ��%e\n", numberFloat);
  printf("ʮ��������ʽ��%a\n", numberFloat);
}

/*������*/
void printfYearMouse(void) {
  int year;
  printf("�������������, �������תΪ������");
  scanf("%d", &year);
  printf("%d ���� %f ��", year, year * 3.156e7);
}

/*������*/
void printfFenzi(void) {
  float kuoTuo;
  printf("������ˮ�Ŀ������������������ˮ���ӵ�������");
  scanf("%f", &kuoTuo);
  double fenziCount = (kuoTuo * 950) / 3.0e-23;
  printf("%f ����ˮ��һ���� %le ��ˮ����", kuoTuo, fenziCount);
}

/*������*/
void printfHeight(void) {
  float yingcunHeight;
  printf("�����������ߣ�����һ������ʾ��");
  scanf("%f", &yingcunHeight);
  printf("%f Ӣ���, %f ���׸�", yingcunHeight, yingcunHeight * 2.54f);
}

/*�ڰ���*/
void printfBei(void) {
  float beiCount;
  printf("�����뱭����");
  scanf("%f", &beiCount);
  printf("������%f", beiCount);
  printf("Ʒ�ѣ�%f\n", 2 / beiCount);
  printf("��˹��%f\n", beiCount * 8);
  printf("���ף�%f\n", (beiCount * 8) * 2);
  printf("���ף�%f\n", ((beiCount * 8) *2) * 3);
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
