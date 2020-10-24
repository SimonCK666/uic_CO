/**
* Example2.c
* @author bulbasaur
* @description 
* @created 2020-10-20T14:15:30.182Z+08:00
* @copyright None 
* None
* @last-modified 2020-10-20T14:15:45.006Z+08:00
*/

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
int main(int argc, char** argv) {
    printf("Storage size for float : %d \n", sizeof(float));
    printf("FLT_MAX : %g\n", (float) FLT_MAX);
    printf("FLT_MIN : %g\n", (float) FLT_MIN);
    printf("-FLT_MAX : %g\n", (float) -FLT_MAX);
    printf("-FLT_MIN : %g\n", (float) -FLT_MIN);
    printf("DBL_MAX : %g\n", (double) DBL_MAX);
    printf("DBL_MIN : %g\n", (double) DBL_MIN);
    printf("-DBL_MAX : %g\n", (double) -DBL_MAX);
    printf("Precision value: %d\n", FLT_DIG );
    return 0;
}