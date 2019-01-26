#include<stdio.h>
void smile(void);
int main(void)
{
    smile(),smile(),printf("smile!\n");
    printf("smile!,smile!\n");
    smile();

    return  0;

}

void smile(void)
{
    printf("smile!");

}
