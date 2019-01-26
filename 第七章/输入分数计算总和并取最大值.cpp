/*������� ������ֵ ���������ֵ����Сֵ*/
#include <stdio.h>
int main(void ){
  const float MIN = 0.0f;
  const float MAX = 100.0f;
  // Ϊ�˵�һ������ʱ����ͬʱ��ֵ
  float minScore = MAX;
  float maxScore = MIN;

  float score;
  float total = 0.0f;
  // ����ķ�������
  int n = 0;

  printf("������������ �����������ֵ��������ֵ����Сֵ: \n");

  while(scanf("%f", &score) == 1) {
    if (score > MAX || score < MIN) {
      continue;
    }

    minScore = score < minScore ? score : minScore;
    maxScore = score > maxScore ? score : maxScore;

    total += score;

    n++;
  }

  if (n > 0) {
    printf("��������%d�����������ǵ���ֵΪ��%f", n , total);
    printf("����ķ�������%f��С��%f���", minScore, maxScore);
  } else {
    printf("��������������");
  }

  return 0;

}
