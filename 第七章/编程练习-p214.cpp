/*编程练习*/
#include <stdio.h>
#include <string.h>
#define END '#'

void tongJiStr(void) {
  char ch;
  int i_spance, i_hang, i_other;

  printf("请输入字符，以#停止输入，只会读取首字符: \n");
  while((ch = getchar()) != END) {
    switch (ch) {
      case '\n' :
        i_hang++;
        break;
      case ' ' :
        i_spance++;
        break;
      default  :
        i_other++;
        break;
    }
    // 跳过输入行的剩余部分
    while (getchar() != '\n')
       continue;
    printf("请输入字符，以#停止输入: \n");
  }
  printf("空格字符的数量是：%d, 换行字符的数量是：%d, 其他字符的数量是：%d\n", i_spance, i_hang, i_other);
}

void printfCharAscii(void) {
  char ch;
  int ch_ascii, i = 0;
  printf("请输入一段字符串，本程序输出其ASCII码：\n");
  while((ch = getchar()) != END) {
    ++i;
    if (ch != '\n')
      printf("%6d, %4d", ch, i);
    if (i % 8 == 0) {
      printf("\n");
    }

  }
}

void tongjiNum(void) {
  int num, oushu, oushuHe, jishu, jishuHe;

  printf("请输入整数，输入0停止程序：");
  scanf("%d", &num);
  while(num != 0) {
    if (num % 2 == 0) {
      oushu++;
      oushuHe += num;
    } else {
      jishu++;
      jishuHe += num;
    }

    printf("请输入整数，输入0停止程序：");
    scanf("%d", &num);
  }

  printf("用户输入的偶数个数为：%-5d, 奇数个数为：%-5d\
          偶数的平均数为：%-10d, 奇数的平均数为：%-10d", oushu, jishu, oushuHe / oushu, jishuHe / jishu);
}

void reponse(void) {
  char ch;
  int reponseCount;
  printf("请输入字符，输入#停止程序：");
  while((ch = getchar()) != '#') {
    if (ch == '\n') {
      continue;
    }
    if (ch == '.') {
      ch = '!';
      reponseCount++;
    } else if (ch == '!') {
      // 因为每次只能读取一个字符，所以ch被赋值的还是一个!号
      ch = '!!';
      putchar(ch);
      reponseCount++;
    }
    putchar(ch);
    printf("\n");
    printf("请输入字符，输入#停止程序：");
  }
  printf("替换的次数为：%d",reponseCount);
}

void tongjiEi(void) {
  // 读取的当前字符, 读取的前一个字符
  char current_char, prev_char;
  int ei_count;
  printf("输入一段字符串，程序将统计\'ei\'的出现次数,以#结束：");
  while((current_char = getchar()) != '#') {
    if (current_char == '\n') {
      continue;
    }
    if (prev_char == 'e' && current_char == 'i') {
      ei_count++;
    }
    prev_char = current_char;
  }
  printf("\'ei\'出现的次数为：%d", ei_count);
}

void gongzi(void) {
  const float SAN = 0.15, XUSAN = 0.20, YUXIA = 0.25;
  int time_house, jia_ban = 0;
  float gongzi_he = 0.00, shun_jin, li_run;
  printf("请输入您一周的工作时间，本程序将计算你的工资：");
  scanf("%d", &time_house);

  // 判断其加班了多少小时
  jia_ban = time_house - 40;
  if (jia_ban > 0) {
    gongzi_he = ((time_house - jia_ban) * 1000 ) + (jia_ban * 1000 * 1.5);
    printf("%f", gongzi_he);
  } else {
    gongzi_he = time_house * 1000;
  }

  // 前300的工资只用交税前300的15%
  if (gongzi_he <= 300) {
    gongzi_he -= gongzi_he * 0.15;
  } else if (gongzi_he <= 450) {
    gongzi_he -= (gongzi_he -300) * 0.2 + (300 * 0.15);
  } else {
    gongzi_he -= (300 * 0.15 + 150 * 0.2) + (gongzi_he - 450) * 0.25;
  }

  printf("最终的工资为：%f", gongzi_he);
}

float jiSuanGongZi (int time_house, float hr_gongzi) {
  float gongzi_he = 0.00;
   // 判断其加班了多少小时
  int jia_ban = time_house - 40;
  if (jia_ban > 0) {
    // 工资等于 正常的小时 * 多少钱一小时 + 加班的小时 * 多少钱一小时 * 1.5倍
    gongzi_he = ((time_house - jia_ban) * hr_gongzi ) + (jia_ban * hr_gongzi * 1.5);
  } else {
    // 如果不存在加班的情况 工资等于上班时间 * 多少钱一小时
    gongzi_he = time_house * hr_gongzi;
  }

  // 前300的工资只用交税前300的15%
  if (gongzi_he <= 300) {
    gongzi_he -= gongzi_he * 0.15;
  } else if (gongzi_he <= 450) {
    gongzi_he -= (gongzi_he -300) * 0.2 + (300 * 0.15);
  } else {
    gongzi_he -= (300 * 0.15 + 150 * 0.2) + (gongzi_he - 450) * 0.25;
  }

  return gongzi_he;
}

void printfGongZiBiao(void) {
  printf("******************************************\n");
  printf("请选择你的收入等级(输入等级序号)\n");
  printf("1)  $8.75/hr                     2)  $9.33/hr\n");
  printf("3)  $10.00/hr                    4)  $11.20/hr\n");
  printf("5)  quit                         \n");
  printf("******************************************\n");
}

void tuGongzi(void) {
  // 工作的小时
  int time_house = 0;
  // 选择的序号
  int xu_hao = 0;
  // 一小时的工资
  float hr_gongzi = 0.00;
  // 工资和
  float gongzi_he = 0.00;
  do {
      // 打印
      printfGongZiBiao();
      scanf("%d", &xu_hao);
      // 判断用户的选择项
      switch(xu_hao) {
        case 1 :
          hr_gongzi = 8.75;
          break;
        case 2 :
          hr_gongzi = 9.33;
          break;
        case 3 :
          hr_gongzi = 10.00;
          break;
        case 4 :
          hr_gongzi = 11.20;
          break;
        case 5 :
          hr_gongzi = 0;
          break;
        default :
          xu_hao = 6;
          printf("=================================\n");
          printf("请输入正确的序号值\n");
          printf("=================================\n");
          printf("\n\n");
          break;
      }
      if (xu_hao == 5) {
        printf("=================================\n");
        printf("欢迎下次继续使用本程序，再见\n");
        printf("=================================\n");
        printf("\n\n");
        break;
      }
      if (xu_hao != 6) {
        printf("请输入你一周的工作时间：");
        scanf("%d", &time_house);
        gongzi_he = jiSuanGongZi(time_house, hr_gongzi);
        printf("您此周的工资为：%f", gongzi_he);
      }
    } while(xu_hao == 6);

}

void printfLine (void) {
  printf("请输入您的纳税种类的序号以及纳税额，以英文逗号分隔，本程序计算其应缴纳税额\n");
  printf("----------------------------------------------------------------------\n");
  printf(" 类别               | 税金                                           |\n");
  printf("----------------------------------------------------------------------\n");
  printf(" 1、单身            | 17850美元按15%计，超出部分按28%计              |\n");
  printf("----------------------------------------------------------------------\n");
  printf(" 2、户主            | 23900美元按15%计，超出部分按28%计              |\n");
  printf("----------------------------------------------------------------------\n");
  printf(" 3、已婚，共有      | 17850美元按15%计，超出部分按28%计              |\n");
  printf("----------------------------------------------------------------------\n");
  printf(" 4、已婚，离异      | 14875美元按15%计，超出部分按28%计              |\n");
  printf("======================================================================\n");
  printf(" 5、退出程序        |                                                |\n");
  printf("======================================================================\n");
}

float jisuanShui (int shui_biao, float gongzi) {
  return 0.15 * shui_biao + (gongzi - shui_biao) * 0.28;
}

void tongjiShui (void) {
  int xuhao = 0;
  int shui_biao = 0;
  float gongzi = 0;
  float shuie = 0;
  do {
    printfLine();
    scanf("%d,%f", &xuhao, &gongzi);
    switch (xuhao) {
      case 1 :
        shui_biao = 17850;
        break;
      case 2 :
        shui_biao = 23900;
        break;
      case 3 :
        shui_biao = 17850;
        break;
      case 4 :
        shui_biao = 14875;
        break;
      case 5 : // 退出程序
        break;
      default : // 输入的错误的序号值
        xuhao = 6;
        break;
    }
    // 输入的错误的序号值 重新输入
    if (xuhao == 6) {
      printf("[请输入正确的序号值!]\n");
    }
    if (xuhao != 6 && xuhao != 5) {
      shuie = jisuanShui(shui_biao, gongzi);
      printf("[你应缴纳%f税款]\n", shuie);
    }
  } while (xuhao != 5);
}

void printfAbc (void) {
  printf("ABC邮购店商品价格，输入对应的商品然后输入购买磅数\n");
  printf("----------------------------------------------------------------------\n");
  printf(" 商品               | 价格                                           |\n");
  printf("----------------------------------------------------------------------\n");
  printf(" a、洋芋            | $2.05/磅                                       |\n");
  printf("----------------------------------------------------------------------\n");
  printf(" b、甜菜            | $1.15/磅                                       |\n");
  printf("----------------------------------------------------------------------\n");
  printf(" c、胡萝卜          | $1.09/磅                                       |\n");
  printf("----------------------------------------------------------------------\n");
  printf("======================================================================\n");
  printf(" q、退出订购        |                                                |\n");
  printf("======================================================================\n");
}

void abcShoping (void) {
  // 洋芋的价格
  const float YANG_JIA = 2.05;
  // 甜菜的价格
  const float TIAN_JIA = 1.5;
  // 胡萝卜的价格
  const float HU_JIA = 1.09;

  // 优惠界限
  const float YOUHUI_BIAO = 100;
  // 优惠折扣
  const float YOUHUI_ZHE = 0.05;

  // 第一档重量磅数
  const float ONE_BANG = 5;
  // 第一档的运费
  const float ONE_BANG_JIA = 6.5;

  // 第二档的重量磅数
  const float TWO_BANG = 20;
  const float TWO_BANG_JIA = 14;

  // 第二档之后的每多少磅加前
  const float YAN_BANG = 1;
  // 每延伸的磅数的价格
  const float YAN_BANG_JIA = 0.5;

  // 选项
  char xuan_ze;

  // 洋芋、甜菜、胡萝卜的磅数
  int yang_bang = 0, tian_bang = 0, hu_bang = 0, temp_bang = 0, zong_bang = 0;

  float yang_jia = 0.0, tian_jia = 0.0, hu_jia = 0.0;

  float zong_jia = 0.0, zhe_jia, yun_jia = 0.0, fukuan_jia = 0.0;

  printfAbc();

  while((xuan_ze = getchar()) != 'q') {
    // 只保留首字母 舍弃其他 在下面的scanf 中 输入后又产生了一个换行符
    // 所以 需要在上面吃掉换行符
    while(getchar() != '\n') {
      continue;
    }

    switch (xuan_ze) {
      case 'a' :
        {
          printf("请输入你购买洋芋的重量(磅)\n");
          scanf("%d", &temp_bang);
          // 又产生了一个换行符
          getchar();
          yang_bang += temp_bang;
        }
        break;
      case 'b' :
        {
          printf("请输入你购买甜菜的重量(磅)\n");
          scanf("%d", &temp_bang);
          getchar();
          tian_bang += temp_bang;
        }
        break;
      case 'c' :
        {
          printf("请输入你购买胡萝卜的重量(磅)\n");
          scanf("%d", &temp_bang);
          getchar();
          hu_bang += temp_bang;
        }
        break;
      default :
        {
          printf("您的输入有误，请重新输入\n");
        }
        break;
    }

    // 重新输入
    printfAbc();
  }

  // 计算各个蔬菜的价格
  yang_jia = yang_bang * YANG_JIA;
  tian_jia = tian_bang * TIAN_JIA;
  hu_jia = hu_bang * HU_JIA;

  // 未计算运费的总价格
  zong_jia = yang_jia + tian_jia + hu_jia;

  // 如果有折扣的话
  if (zong_jia >= 100) {
    zhe_jia = zong_jia * 0.05;
  }

  // 计算总重量 洋 + 甜 + 胡
  // 计算运费
  zong_bang = yang_bang + tian_bang + hu_bang;
  // 如果小于或者等于第一档的重量
  if (zong_bang <= ONE_BANG) {
    // 运费只收取第一档的运费
    yun_jia = ONE_BANG_JIA;
  // 大于第一档 小于 第二档
  } else if (zong_bang <= TWO_BANG) {
    // 收取第二档的运费
    yun_jia = TWO_BANG_JIA;
    // 大于第二档的话
  } else {
    // 先收取第二档的运费 每 超过规定的值 则收取 规定的费用
    yun_jia = TWO_BANG_JIA + ((zong_bang - TWO_BANG) / YAN_BANG) * YAN_BANG_JIA;
  }

  // 不包含优惠的总价格
  zong_jia += yun_jia;
  // 包含优惠的总价格
  fukuan_jia = zong_jia - zhe_jia;

  printf("【谢谢您的购物，请查收您的账单】\n\n");
  printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
  printf(" 购买的商品   | 商品价格\磅   | 已购重量   | 付款          +\n");
  printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
  printf(" a、洋芋      | $2.05/磅      | %-5d       | $%-5.2f        |\n", yang_bang, yang_jia);
  printf("------------------------------------------------------------\n");
  printf(" b、甜菜      | $1.15/磅      | %-5d       | $%-5.2f        |\n", tian_bang, tian_jia);
  printf("------------------------------------------------------------\n");
  printf(" c、胡萝卜    | $1.09/磅      | %-5d       | $%-5.2f        |\n", hu_bang, hu_jia);
  printf("-------------------------------------------------------------\n");
  printf("=============================================================\n");
  printf(" 总重：    $%-5d\n", zong_bang);
  printf("-------------------------------------------------------------\n");
  printf(" 运费：    $%-5.2f\n", yun_jia);
  printf("-------------------------------------------------------------\n");
  printf(" 折扣：    $%-5.2f\n", zhe_jia);
  printf("-------------------------------------------------------------\n");
  printf(" 总价：    $%-5.2f \n", zong_jia);
  printf("*************************************************************\n");
  printf(" 付款价：  $%-5.2f - $%-5.2f\n",zong_jia, zhe_jia);
  printf("      =：  [$%-5.2f]\n",fukuan_jia);
  printf("*************************************************************\n");
}

int main(void) {
  // tongJiStr();
  // printfCharAscii();
  // tongjiNum();
  // reponse();
  // return 0;
  // tongjiEi();
  // gongzi();
  // tuGongzi();
  // tongjiShui();
  abcShoping();
  return 0;
}
