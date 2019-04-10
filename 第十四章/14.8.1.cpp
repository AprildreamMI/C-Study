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

  // 书籍数量
  int bk_count = 0, index, filecount;
  FILE *pbooks;
  // 获取一个结构体变量的字节 为fwirter做准备
  int size = sizeof(struct book);

  // 打开文件
  if ((pbooks = fopen("book.dat", "a+b")) == NULL) {
    fputs("打开文件失败", stderr);
    exit(1);
  }

  // 定义到文件开始处
  rewind(pbooks);
  printf("%d\n", bk_count);
  // 读取文件到结构数组中，不能超过最大数组长度并且正确读取了
  while(bk_count < MAXBKS && fread(&library[bk_count], size, 1, pbooks) == 1) {
    if(bk_count == 0) {
      puts("当前的内容为dat书籍文件中的: ");
    }
    printf("%s 是 %s : %.2f\n", library[bk_count].title, library[bk_count].author, library[bk_count].value);
    bk_count++;
  }

  filecount = bk_count;
  if (bk_count == MAXBKS) {
    fputs("这个书籍文件已经被填满了", stderr);
    exit(1);
  }
  puts("请输入书籍的标题");
  puts("回车输入，空行结束");
  // 输入书籍标题和作者，并且标题不能为空，直到填满整个结构数组
  while(bk_count < MAXBKS && s_gets(library[bk_count].title, MAXTITL) != NULL && library[bk_count].title[0] != '\0') {
    puts("请输入作者：");
    s_gets(library[bk_count].author, MAXAUTL);
    puts("请输入价格：");
    scanf("%f", &library[bk_count++].value);
    while(getchar() != '\n') {
      continue;
    }
    if (bk_count < MAXBKS) {
      puts("请输入下一个书籍标题：");
    }
  }

  if (bk_count > 0) {
    puts("请查看你的书籍列表");
    for (int i = 0; i < bk_count; i++) {
      printf("%s 是 %s : %.2f\n", library[i].title, library[i].author, library[i].value);
      // 把自己输入的书籍写到书籍文件中
      fwrite(&library[filecount], size, 1, pbooks);
    }
  } else {
    puts("没有书籍了吗？再见！");
  }
  fclose(pbooks);

  return 0;
}

// 字符串输入函数
char * s_gets(char * st, int n) {
  char * ret_val;
  char * st_find;

  // 输入文字 返回的是第一个参数的地址
  ret_val = fgets(st, n, stdin);
  if (ret_val) {
    // 查找回车 返回的是回车符的地址
    st_find = strchr(st, '\n');
    // 如果回车符存在 地址不是null
    if (st_find) {
      *st_find = '\0';
    } else {
      while(getchar() != '\n') {
        // 清理输入行
        continue;
      }
    }
  }

  // 虽然返回了，但是并未使用返回值，没有成为静态的变量
  return ret_val;
}
