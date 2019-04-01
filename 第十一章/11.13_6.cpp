#include <stdio.h>
#include <string.h>

char * mystrncpy(char [], char [], int );

int main(void) {

    char str1[] = "zhaosi shi ge da sha gua";
    char str2[] = "hahahahahahahhahahahhahahhahaha";

    puts(mystrncpy(str1, str2, 26));

    return 0;
}

char * mystrncpy(char str1[], char str2[], int n) {

    char *p_str1 = str1;

    int str1_len = strlen(str1);
    int str2_len = strlen(str2);
    int i = 0;


    while(i < n) {
        str1[i] = str2[i];
        i++;
    }

    return p_str1;
}
