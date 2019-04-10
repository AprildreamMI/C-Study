#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS  10

char * s_gets(char * st, int n);

struct book {
  char title[MAXTITL];
  char author[MAXAUTL];
  float value;
};

int main(void) {
  struct book library[MAXBKS];

  // �鼮����
  int bk_count = 0, index, filecount;
  FILE *pbooks;
  // ��ȡһ���ṹ��������ֽ� Ϊfwirter��׼��
  int size = sizeof(struct book);

  // ���ļ�
  if ((pbooks = fopen("book.dat", "a+b")) == NULL) {
    fputs("���ļ�ʧ��", stderr);
    exit(1);
  }

  // ���嵽�ļ���ʼ��
  rewind(pbooks);
  printf("%d\n", bk_count);
  // ��ȡ�ļ����ṹ�����У����ܳ���������鳤�Ȳ�����ȷ��ȡ��
  while(bk_count < MAXBKS && fread(&library[bk_count], size, 1, pbooks) == 1) {
    if(bk_count == 0) {
      puts("��ǰ������Ϊdat�鼮�ļ��е�: ");
    }
    printf("%s �� %s : %.2f\n", library[bk_count].title, library[bk_count].author, library[bk_count].value);
    bk_count++;
  }

  filecount = bk_count;
  if (bk_count == MAXBKS) {
    fputs("����鼮�ļ��Ѿ���������", stderr);
    exit(1);
  }
  puts("�������鼮�ı���");
  puts("�س����룬���н���");
  // �����鼮��������ߣ����ұ��ⲻ��Ϊ�գ�ֱ�����������ṹ����
  while(bk_count < MAXBKS && s_gets(library[bk_count].title, MAXTITL) != NULL && library[bk_count].title[0] != '\0') {
    puts("���������ߣ�");
    s_gets(library[bk_count].author, MAXAUTL);
    puts("������۸�");
    scanf("%f", &library[bk_count++].value);
    while(getchar() != '\n') {
      continue;
    }
    if (bk_count < MAXBKS) {
      puts("��������һ���鼮���⣺");
    }
  }

  if (bk_count > 0) {
    puts("��鿴����鼮�б�");
    for (int i = 0; i < bk_count; i++) {
      printf("%s �� %s : %.2f\n", library[i].title, library[i].author, library[i].value);
      // ���Լ�������鼮д���鼮�ļ���
      fwrite(&library[filecount], size, 1, pbooks);
    }
  } else {
    puts("û���鼮�����ټ���");
  }
  fclose(pbooks);

  return 0;
}

// �ַ������뺯��
char * s_gets(char * st, int n) {
  char * ret_val;
  char * st_find;

  // �������� ���ص��ǵ�һ�������ĵ�ַ
  ret_val = fgets(st, n, stdin);
  if (ret_val) {
    // ���һس� ���ص��ǻس����ĵ�ַ
    st_find = strchr(st, '\n');
    // ����س������� ��ַ����null
    if (st_find) {
      *st_find = '\0';
    } else {
      while(getchar() != '\n') {
        // ����������
        continue;
      }
    }
  }

  // ��Ȼ�����ˣ����ǲ�δʹ�÷���ֵ��û�г�Ϊ��̬�ı���
  return ret_val;
}
