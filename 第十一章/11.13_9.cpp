#include <stdio.h>
#include <string.h>

void reverse_char(char []);

int main(void) {

    char str[] = "wobushihuangrong";

    reverse_char(str);

    puts(str);

    return 0;
}

void reverse_char(char str[]) {

    int str_len = strlen(str);
    for(int i = 0; i < str_len / 2; i++) {
        char temp = str[i];
        str[i] = str[str_len - i - 1];
        str[str_len - i -1] = temp;
    }

}
