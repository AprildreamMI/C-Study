/*输入分数 计算总值 并输入最大值和最小值*/
#include <stdio.h>
int main(void ){
  const float MIN = 0.0f;
  const float MAX = 100.0f;
  // 为了第一次输入时两个同时赋值
  float minScore = MAX;
  float maxScore = MIN;

  float score;
  float total = 0.0f;
  // 输入的分数计数
  int n = 0;

  printf("请输入多个分数 本程序计算总值并输出最大值和最小值: \n");

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
    printf("你输入了%d个分数，他们的总值为：%f", n , total);
    printf("输入的分数其中%f最小，%f最大", minScore, maxScore);
  } else {
    printf("请输入多个分数！");
  }

  return 0;

}
