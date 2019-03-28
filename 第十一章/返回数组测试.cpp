#include <stdio.h>

//int * getchar_n();

int * getchar_n () {
    int r[] = {1, 2, 3, 4, 5, 6}, i;

    for ( i = 0; i < 6; ++i)
      {
         printf( "r[%d] = %d\n", i, r[i]);

      }

    return r;
}


int main (void) {

    int *r_p, i;

    r_p = getchar_n();

    for ( i = 0; i < 6; i++ )
    {
       printf( "*(r_p + %d) : %d\n", i, *(r_p + i));
    }

    return 0;
}
