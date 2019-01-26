/*�����ϰ*/
#include <stdio.h>
#include <string.h>
#define END '#'

void tongJiStr(void) {
  char ch;
  int i_spance, i_hang, i_other;

  printf("�������ַ�����#ֹͣ���룬ֻ���ȡ���ַ�: \n");
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
    // ���������е�ʣ�ಿ��
    while (getchar() != '\n')
       continue;
    printf("�������ַ�����#ֹͣ����: \n");
  }
  printf("�ո��ַ��������ǣ�%d, �����ַ��������ǣ�%d, �����ַ��������ǣ�%d\n", i_spance, i_hang, i_other);
}

void printfCharAscii(void) {
  char ch;
  int ch_ascii, i = 0;
  printf("������һ���ַ����������������ASCII�룺\n");
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

  printf("����������������0ֹͣ����");
  scanf("%d", &num);
  while(num != 0) {
    if (num % 2 == 0) {
      oushu++;
      oushuHe += num;
    } else {
      jishu++;
      jishuHe += num;
    }

    printf("����������������0ֹͣ����");
    scanf("%d", &num);
  }

  printf("�û������ż������Ϊ��%-5d, ��������Ϊ��%-5d\
          ż����ƽ����Ϊ��%-10d, ������ƽ����Ϊ��%-10d", oushu, jishu, oushuHe / oushu, jishuHe / jishu);
}

void reponse(void) {
  char ch;
  int reponseCount;
  printf("�������ַ�������#ֹͣ����");
  while((ch = getchar()) != '#') {
    if (ch == '\n') {
      continue;
    }
    if (ch == '.') {
      ch = '!';
      reponseCount++;
    } else if (ch == '!') {
      // ��Ϊÿ��ֻ�ܶ�ȡһ���ַ�������ch����ֵ�Ļ���һ��!��
      ch = '!!';
      putchar(ch);
      reponseCount++;
    }
    putchar(ch);
    printf("\n");
    printf("�������ַ�������#ֹͣ����");
  }
  printf("�滻�Ĵ���Ϊ��%d",reponseCount);
}

void tongjiEi(void) {
  // ��ȡ�ĵ�ǰ�ַ�, ��ȡ��ǰһ���ַ�
  char current_char, prev_char;
  int ei_count;
  printf("����һ���ַ���������ͳ��\'ei\'�ĳ��ִ���,��#������");
  while((current_char = getchar()) != '#') {
    if (current_char == '\n') {
      continue;
    }
    if (prev_char == 'e' && current_char == 'i') {
      ei_count++;
    }
    prev_char = current_char;
  }
  printf("\'ei\'���ֵĴ���Ϊ��%d", ei_count);
}

void gongzi(void) {
  const float SAN = 0.15, XUSAN = 0.20, YUXIA = 0.25;
  int time_house, jia_ban = 0;
  float gongzi_he = 0.00, shun_jin, li_run;
  printf("��������һ�ܵĹ���ʱ�䣬�����򽫼�����Ĺ��ʣ�");
  scanf("%d", &time_house);

  // �ж���Ӱ��˶���Сʱ
  jia_ban = time_house - 40;
  if (jia_ban > 0) {
    gongzi_he = ((time_house - jia_ban) * 1000 ) + (jia_ban * 1000 * 1.5);
    printf("%f", gongzi_he);
  } else {
    gongzi_he = time_house * 1000;
  }

  // ǰ300�Ĺ���ֻ�ý�˰ǰ300��15%
  if (gongzi_he <= 300) {
    gongzi_he -= gongzi_he * 0.15;
  } else if (gongzi_he <= 450) {
    gongzi_he -= (gongzi_he -300) * 0.2 + (300 * 0.15);
  } else {
    gongzi_he -= (300 * 0.15 + 150 * 0.2) + (gongzi_he - 450) * 0.25;
  }

  printf("���յĹ���Ϊ��%f", gongzi_he);
}

float jiSuanGongZi (int time_house, float hr_gongzi) {
  float gongzi_he = 0.00;
   // �ж���Ӱ��˶���Сʱ
  int jia_ban = time_house - 40;
  if (jia_ban > 0) {
    // ���ʵ��� ������Сʱ * ����ǮһСʱ + �Ӱ��Сʱ * ����ǮһСʱ * 1.5��
    gongzi_he = ((time_house - jia_ban) * hr_gongzi ) + (jia_ban * hr_gongzi * 1.5);
  } else {
    // ��������ڼӰ����� ���ʵ����ϰ�ʱ�� * ����ǮһСʱ
    gongzi_he = time_house * hr_gongzi;
  }

  // ǰ300�Ĺ���ֻ�ý�˰ǰ300��15%
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
  printf("��ѡ���������ȼ�(����ȼ����)\n");
  printf("1)  $8.75/hr                     2)  $9.33/hr\n");
  printf("3)  $10.00/hr                    4)  $11.20/hr\n");
  printf("5)  quit                         \n");
  printf("******************************************\n");
}

void tuGongzi(void) {
  // ������Сʱ
  int time_house = 0;
  // ѡ������
  int xu_hao = 0;
  // һСʱ�Ĺ���
  float hr_gongzi = 0.00;
  // ���ʺ�
  float gongzi_he = 0.00;
  do {
      // ��ӡ
      printfGongZiBiao();
      scanf("%d", &xu_hao);
      // �ж��û���ѡ����
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
          printf("��������ȷ�����ֵ\n");
          printf("=================================\n");
          printf("\n\n");
          break;
      }
      if (xu_hao == 5) {
        printf("=================================\n");
        printf("��ӭ�´μ���ʹ�ñ������ټ�\n");
        printf("=================================\n");
        printf("\n\n");
        break;
      }
      if (xu_hao != 6) {
        printf("��������һ�ܵĹ���ʱ�䣺");
        scanf("%d", &time_house);
        gongzi_he = jiSuanGongZi(time_house, hr_gongzi);
        printf("�����ܵĹ���Ϊ��%f", gongzi_he);
      }
    } while(xu_hao == 6);

}

void printfLine (void) {
  printf("������������˰���������Լ���˰���Ӣ�Ķ��ŷָ��������������Ӧ����˰��\n");
  printf("----------------------------------------------------------------------\n");
  printf(" ���               | ˰��                                           |\n");
  printf("----------------------------------------------------------------------\n");
  printf(" 1������            | 17850��Ԫ��15%�ƣ��������ְ�28%��              |\n");
  printf("----------------------------------------------------------------------\n");
  printf(" 2������            | 23900��Ԫ��15%�ƣ��������ְ�28%��              |\n");
  printf("----------------------------------------------------------------------\n");
  printf(" 3���ѻ飬����      | 17850��Ԫ��15%�ƣ��������ְ�28%��              |\n");
  printf("----------------------------------------------------------------------\n");
  printf(" 4���ѻ飬����      | 14875��Ԫ��15%�ƣ��������ְ�28%��              |\n");
  printf("======================================================================\n");
  printf(" 5���˳�����        |                                                |\n");
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
      case 5 : // �˳�����
        break;
      default : // ����Ĵ�������ֵ
        xuhao = 6;
        break;
    }
    // ����Ĵ�������ֵ ��������
    if (xuhao == 6) {
      printf("[��������ȷ�����ֵ!]\n");
    }
    if (xuhao != 6 && xuhao != 5) {
      shuie = jisuanShui(shui_biao, gongzi);
      printf("[��Ӧ����%f˰��]\n", shuie);
    }
  } while (xuhao != 5);
}

void printfAbc (void) {
  printf("ABC�ʹ�����Ʒ�۸������Ӧ����ƷȻ�����빺�����\n");
  printf("----------------------------------------------------------------------\n");
  printf(" ��Ʒ               | �۸�                                           |\n");
  printf("----------------------------------------------------------------------\n");
  printf(" a������            | $2.05/��                                       |\n");
  printf("----------------------------------------------------------------------\n");
  printf(" b�����            | $1.15/��                                       |\n");
  printf("----------------------------------------------------------------------\n");
  printf(" c�����ܲ�          | $1.09/��                                       |\n");
  printf("----------------------------------------------------------------------\n");
  printf("======================================================================\n");
  printf(" q���˳�����        |                                                |\n");
  printf("======================================================================\n");
}

void abcShoping (void) {
  // ����ļ۸�
  const float YANG_JIA = 2.05;
  // ��˵ļ۸�
  const float TIAN_JIA = 1.5;
  // ���ܲ��ļ۸�
  const float HU_JIA = 1.09;

  // �Żݽ���
  const float YOUHUI_BIAO = 100;
  // �Ż��ۿ�
  const float YOUHUI_ZHE = 0.05;

  // ��һ����������
  const float ONE_BANG = 5;
  // ��һ�����˷�
  const float ONE_BANG_JIA = 6.5;

  // �ڶ�������������
  const float TWO_BANG = 20;
  const float TWO_BANG_JIA = 14;

  // �ڶ���֮���ÿ���ٰ���ǰ
  const float YAN_BANG = 1;
  // ÿ����İ����ļ۸�
  const float YAN_BANG_JIA = 0.5;

  // ѡ��
  char xuan_ze;

  // ������ˡ����ܲ��İ���
  int yang_bang = 0, tian_bang = 0, hu_bang = 0, temp_bang = 0, zong_bang = 0;

  float yang_jia = 0.0, tian_jia = 0.0, hu_jia = 0.0;

  float zong_jia = 0.0, zhe_jia, yun_jia = 0.0, fukuan_jia = 0.0;

  printfAbc();

  while((xuan_ze = getchar()) != 'q') {
    // ֻ��������ĸ �������� �������scanf �� ������ֲ�����һ�����з�
    // ���� ��Ҫ������Ե����з�
    while(getchar() != '\n') {
      continue;
    }

    switch (xuan_ze) {
      case 'a' :
        {
          printf("�������㹺�����������(��)\n");
          scanf("%d", &temp_bang);
          // �ֲ�����һ�����з�
          getchar();
          yang_bang += temp_bang;
        }
        break;
      case 'b' :
        {
          printf("�������㹺����˵�����(��)\n");
          scanf("%d", &temp_bang);
          getchar();
          tian_bang += temp_bang;
        }
        break;
      case 'c' :
        {
          printf("�������㹺����ܲ�������(��)\n");
          scanf("%d", &temp_bang);
          getchar();
          hu_bang += temp_bang;
        }
        break;
      default :
        {
          printf("����������������������\n");
        }
        break;
    }

    // ��������
    printfAbc();
  }

  // ��������߲˵ļ۸�
  yang_jia = yang_bang * YANG_JIA;
  tian_jia = tian_bang * TIAN_JIA;
  hu_jia = hu_bang * HU_JIA;

  // δ�����˷ѵ��ܼ۸�
  zong_jia = yang_jia + tian_jia + hu_jia;

  // ������ۿ۵Ļ�
  if (zong_jia >= 100) {
    zhe_jia = zong_jia * 0.05;
  }

  // ���������� �� + �� + ��
  // �����˷�
  zong_bang = yang_bang + tian_bang + hu_bang;
  // ���С�ڻ��ߵ��ڵ�һ��������
  if (zong_bang <= ONE_BANG) {
    // �˷�ֻ��ȡ��һ�����˷�
    yun_jia = ONE_BANG_JIA;
  // ���ڵ�һ�� С�� �ڶ���
  } else if (zong_bang <= TWO_BANG) {
    // ��ȡ�ڶ������˷�
    yun_jia = TWO_BANG_JIA;
    // ���ڵڶ����Ļ�
  } else {
    // ����ȡ�ڶ������˷� ÿ �����涨��ֵ ����ȡ �涨�ķ���
    yun_jia = TWO_BANG_JIA + ((zong_bang - TWO_BANG) / YAN_BANG) * YAN_BANG_JIA;
  }

  // �������Żݵ��ܼ۸�
  zong_jia += yun_jia;
  // �����Żݵ��ܼ۸�
  fukuan_jia = zong_jia - zhe_jia;

  printf("��лл���Ĺ������������˵���\n\n");
  printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
  printf(" �������Ʒ   | ��Ʒ�۸�\��   | �ѹ�����   | ����          +\n");
  printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
  printf(" a������      | $2.05/��      | %-5d       | $%-5.2f        |\n", yang_bang, yang_jia);
  printf("------------------------------------------------------------\n");
  printf(" b�����      | $1.15/��      | %-5d       | $%-5.2f        |\n", tian_bang, tian_jia);
  printf("------------------------------------------------------------\n");
  printf(" c�����ܲ�    | $1.09/��      | %-5d       | $%-5.2f        |\n", hu_bang, hu_jia);
  printf("-------------------------------------------------------------\n");
  printf("=============================================================\n");
  printf(" ���أ�    $%-5d\n", zong_bang);
  printf("-------------------------------------------------------------\n");
  printf(" �˷ѣ�    $%-5.2f\n", yun_jia);
  printf("-------------------------------------------------------------\n");
  printf(" �ۿۣ�    $%-5.2f\n", zhe_jia);
  printf("-------------------------------------------------------------\n");
  printf(" �ܼۣ�    $%-5.2f \n", zong_jia);
  printf("*************************************************************\n");
  printf(" ����ۣ�  $%-5.2f - $%-5.2f\n",zong_jia, zhe_jia);
  printf("      =��  [$%-5.2f]\n",fukuan_jia);
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
