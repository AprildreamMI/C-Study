/*�����ϰ p174*/
#include <stdio.h>
#include <string.h>
#include <math.h>

void testOne(void) {
  char zimu[26];
  for (int i = 0; i < 26; i++) {
      printf("%d", i);
    zimu[i] = i + 97;
    printf("%c", zimu[i]);
  }
  for (int i = 0; i < strlen(zimu) - 1; i++) {
    printf("%-5c", zimu[i]);
  }
}

void testTwo(void) {
  for (int i = 0; i < 5; i++) {
      for (int j = 0; j < i + 1; j++) {
          printf("$");
      }
      printf("\n");
  }
}

void testThree(void) {
  for (int i = 1; i <= 6; i++) {
    for (int j = 70; j > 70 - i; j--) {
      printf("%c", j);
    }
    printf("\n");
  }
}

/*void testFour(void) {
  int i , j = 'A';
  for (int i = 'A'; i < 'U'; i = j) {
    for ( ; j < i + 1; j++) {
      printf("%c", j);
    }
    printf("\n");
  }
}*/

void printfTable(void) {
  int minNum, maxNum;
  printf("����һ����ʼ������һ����������, ʹ�ö��ż����\n");
  scanf("%d,%d", &minNum, &maxNum);

  for(int i = minNum; i <= maxNum; i++) {
    printf("%-6d %-6d %-6d\n", i, i*i, i*i*i);
  }
}

void testSaven(void) {
  char danci[40];
  printf("������һ�����ʣ�������ᵹ���ӡ������");
  scanf("%s", danci);
  /*for (int i = strlen(danci) - 1; i >= 0; i--) {
    printf("%c",danci[i]);
  }*/
  printf("%c", danci[0]);
  printf("%d", strlen(danci));
}

double twoDouble(double num1, double num2) {
  return ((num1 - num2) / (num1 * num2));
}

void pingfanghe(void) {
  int n1 = 5, n2 = 10;
  long he;
  while (n2 > n1) {
    printf("��������������,�Զ��ż������һ������λ���ޣ��ڶ�������Ϊ���ޣ����򽫼���������������ƽ���ͣ�\n");
    scanf("%d, %d",&n1, &n2);
    if (n2 < n1) {
      break;
    }
    for (int i = n1; i <= n2; i++) {
      he += i * i;
    }
    printf("��%ld��%ld, �����ƽ����Ϊ��%ld\n", n1 * n1, n2 *n2, he);
  }
}

void twoDobuleArr (void) {
  double arr1[8], arr2[8];

  for (int i = 0; i < 8; i++) {
    printf("�������һ������ĵ�%d��Ԫ�ص�ֵ: \n", i + 1);
    scanf("%lf", &arr1[i]);
    for (int j = 0; j <= i; j++) {
      arr2[i] +=arr1[j];
    }
  }

  for (int i = 0; i < 8; i++) {
    printf("%-10lf", arr1[i]);
  }
  printf("\n");
  for (int j = 0; j < 8; j++) {
    printf("%-10lf", arr2[j]);
  }
}

void scanfString(void) {
  char str[255];

  printf("������һ���ַ������������䵹���ӡ: \n");
  scanf("%s", &str);
  for (int i = strlen(str) - 1; i >= 0; i--) {
    printf("%c", str[i]);
  }
}

void quqian(void) {
  double cunkuan = 100 * 10000;
  const double lilv = 0.08;
  const double oneQuqian = 10 * 10000;
  int year = 0;
  while (cunkuan > 0) {
    cunkuan += lilv * 1 * cunkuan;
    cunkuan -= oneQuqian;
    year++;
  }
  printf("%d", year);
}

void pengyou(void) {
  int pengyou = 5;
  for (int i  = 1; i > 0; i++) {
    printf("��%d��", i);
    printf("    ֮ǰ������������%d", pengyou);
    pengyou -= i;
    printf("    ��ȥ��һ��֮�������������%d", pengyou);
    pengyou *= 2;
    printf("    �����������������%d\n", pengyou);
    if (pengyou > 150) {
      break;
    }

  }
  printf("%d", pengyou);
}

int main(void) {
  // testOne();
  // testTwo();
  // testThree();
  // testFour();
  // printfTable();
  // testSaven();
  // pingfanghe();
  // twoDobuleArr();
  // scanfString();
  // quqian();
  pengyou();
  /*double num1, num2;
  int testNum;
  do {
      printf("������һ�Ը���������Ӣ�Ķ��ż����\n");
      testNum = scanf("%lf, %lf", &num1, &num2);
      printf("%lf\n", twoDouble(num1, num2));
  } while (testNum == 2);*/

  return 0;

}
