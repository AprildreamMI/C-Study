#include <stdio.h>
#include <string.h>
void fit(char *, unsigned int);

int main(void) {

//    char mesg [] = "Things shound be as simple as possible but not simpler";
//    puts(mesg);
//    fit(mesg, 38);
//    puts(mesg);
//    puts("Let's look at some more of the string");
//    puts(mesg + 39);
    int i = 0;
    char str[] = "zhaosi";
    i = strlen(str);
    printf("×Ö·û´®³¤¶ÈÎ´: %d\n", i);

    return 0;
}

void fit(char *string, unsigned int size) {

    if (strlen(string) > size) {
        string[size] = '\0';
    }
}
