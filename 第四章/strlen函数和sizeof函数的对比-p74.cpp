#include <stdio.h>
#include <string.h>
#define PRAISE "asdzxc456"
int main(void) {
  char name[40];

  printf("What's you name?\n");

  scanf("%s", name);
  printf("Hello, %s, %s\n", name, PRAISE);
  printf("������ֳ���Ϊ%zd, ��%zd, �ֽڳ�\n", strlen(name), sizeof(name));

  printf("Ԥ�����ַ�������Ϊ�� %zd\n", strlen(PRAISE));
  printf("Ԥ�����ַ������ֽڳ���Ϊ��%zd\n", sizeof(PRAISE));

  return 0;
}
