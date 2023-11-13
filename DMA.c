#include <stdio.h>
#include <stdlib.h>
void main()
{
    float *r;
    r = (float *)malloc(5 * sizeof(float));
    r[0] = 1.00000;
    r[1] = 2.00000;
    r[2] = 3.00000;
    r[3] = 4.00000;
    free(r);
    r = 1.00000;
    r[4] = 5.00000;
    r[5] = 6.00000;
    printf("%f", r[5]);
}