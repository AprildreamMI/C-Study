#include <stdio.h>
#include <string.h>

//char * get_work(char []);
void get_work(char [], int );


int main(void) {

    char * p_work;
    char work[20];

    get_work(work, 20);

    puts(work);

    return 0;
}

void get_work(char work_array[], int max_char) {

//    char *p = work_array;
    char ch;
    int i = 0;
    int bol = 1;

    while((ch = getchar()) != '\n' && bol && i < max_char) {
        if (ch == ' ') {
            if (i != 0) {
                bol = 0;
            }
        } else {
            work_array[i] = ch;
            i++;
        }
    }

    work_array[i] = '\0';

}
