#include <stdio.h>
#include <string.h>

char * string_in(char *, char *);

int main(void) {

    char str1[] = "zhaosi si";
    char str2[] = "si";

    puts(string_in(str1, str2));

    return 0;

}

char * string_in(char * str1, char * str2) {

//    char * str2_index;

    int str1_len = strlen(str1);
    int str2_len = strlen(str2);
    int str2_num = 0;

    for(int i = 0; i < str1_len; i++) {
        for(int j = 0; j < str2_len; j++) {
            if (str1[i + j] == str2[j]) {
                str2_num++;
            } else {
                break;
            }
            if (str2_num == str2_len) {
                return &str1[i];
            }
        }
    }


    return NULL;

}
