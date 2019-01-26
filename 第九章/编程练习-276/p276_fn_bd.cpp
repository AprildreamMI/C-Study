#include <stdio.h>
#include "p276_fn.h"

void testStatus (void) {
  printf("%d", STATUS);
}

/* Test five */
/*
    ����ָ��
    �ո���п���
    double * p;
    ��ֵabc�ĵ�ַ����p, p����һ��ָ�����
    p = &abc;
    *P �� abc ��ֵ
    ͨ����ַ�������
*/
void larget_of (double * x, double * y) {
  if (*x > *y) {
    *y = *x;
  } else {
    *x = *y;
  }
}

/*
    Test six
*/
void transitionThreeVariate (double * a, double * b, double * c) {
  double min_number, zhong_number, max_number;
  if (*a > *b) {
    if (*a > *c) {
      max_number = *a;
      if (*b > *c) {
        zhong_number = *b;
        min_number = *c;
      } else {
        zhong_number = *c;
        min_number = *b;
      }
    } else {
      max_number = *c;
      zhong_number = *a;
      min_number = *b;
    }
  } else {
    if (*a > *c) {
      max_number = *b;
      zhong_number = *a;
      min_number = *c;
    } else {
      max_number = *b;
      zhong_number = *c;
      min_number = *a;
    }
  }

  *a = min_number;
  *b = zhong_number;
  *c = max_number;
}


// Test 7
int findeAbcIndex (char c) {

  int index = -1;

  if (c >= 'A' && c <= 'Z') {
    index = (int)c - 64;
  }

  if (c >= 'a' && c <= 'z') {
    index = (int)c - 96;
  }

  return index;
}
