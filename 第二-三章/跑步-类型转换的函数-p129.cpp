/*类型转换 p29*/
#include <stdio.h>
const int S_PER_M = 60; // 一分钟的秒数
const int S_PER_H = 3600; // 一小时的分钟数
const double M_PER_K = 0.62137; // 1公里的英里数
int main(void) {
  double distk, distm;  // 所跑的距离(英里和公里)
  double rate;          // 平均速度(英里/小时)
  int minTime, secTime; // 跑步用时(以分钟和秒为单位)
  int time;             // 跑步用时(以秒为单位)
  double mtime;        // 跑1英/秒
  int mmin, msec;       // 跑1英里需要的时间, 以分钟和秒为单位

  printf("本程序用户输入公里数计算1英里/每小时的速度\n");

  printf("请输入你所跑的公里距离：");
  scanf("%lf", &distk);

  printf("请输入你所用的分钟：");
  scanf("%d", &minTime);

  printf("请输入你所用的秒数：");
  scanf("%d", &secTime);

  // 所跑公里数所用的秒数 分钟数 * 1分钟/秒 + 秒数
  time = S_PER_M * minTime + secTime;

  //  公里转化为英里
  distm = M_PER_K * distk;

  //  速度 英里/1小时 每小时跑几英里
  rate = distm / time * S_PER_H;

  //  时间 一英里跑多少秒
  mtime = (double) time / distm;

  //  1英里跑多少分钟
  mmin = (int) mtime / S_PER_M;

  //  1英里跑多少秒
  msec = (int) mtime % S_PER_M;

  printf("你跑了%1.2f km (%1.2f 英里)， 用了 %d 分钟， %d 秒\n", distk, distm, minTime, secTime);

  printf("跑1英里所需要的时间为：%d 分钟, %d 秒, ", mmin, msec);
  printf("速度为：%1.2f 每小时", rate);





}
