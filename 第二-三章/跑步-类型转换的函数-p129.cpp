/*����ת�� p29*/
#include <stdio.h>
const int S_PER_M = 60; // һ���ӵ�����
const int S_PER_H = 3600; // һСʱ�ķ�����
const double M_PER_K = 0.62137; // 1�����Ӣ����
int main(void) {
  double distk, distm;  // ���ܵľ���(Ӣ��͹���)
  double rate;          // ƽ���ٶ�(Ӣ��/Сʱ)
  int minTime, secTime; // �ܲ���ʱ(�Է��Ӻ���Ϊ��λ)
  int time;             // �ܲ���ʱ(����Ϊ��λ)
  double mtime;        // ��1Ӣ/��
  int mmin, msec;       // ��1Ӣ����Ҫ��ʱ��, �Է��Ӻ���Ϊ��λ

  printf("�������û����빫��������1Ӣ��/ÿСʱ���ٶ�\n");

  printf("�����������ܵĹ�����룺");
  scanf("%lf", &distk);

  printf("�����������õķ��ӣ�");
  scanf("%d", &minTime);

  printf("�����������õ�������");
  scanf("%d", &secTime);

  // ���ܹ��������õ����� ������ * 1����/�� + ����
  time = S_PER_M * minTime + secTime;

  //  ����ת��ΪӢ��
  distm = M_PER_K * distk;

  //  �ٶ� Ӣ��/1Сʱ ÿСʱ�ܼ�Ӣ��
  rate = distm / time * S_PER_H;

  //  ʱ�� һӢ���ܶ�����
  mtime = (double) time / distm;

  //  1Ӣ���ܶ��ٷ���
  mmin = (int) mtime / S_PER_M;

  //  1Ӣ���ܶ�����
  msec = (int) mtime % S_PER_M;

  printf("������%1.2f km (%1.2f Ӣ��)�� ���� %d ���ӣ� %d ��\n", distk, distm, minTime, secTime);

  printf("��1Ӣ������Ҫ��ʱ��Ϊ��%d ����, %d ��, ", mmin, msec);
  printf("�ٶ�Ϊ��%1.2f ÿСʱ", rate);





}
