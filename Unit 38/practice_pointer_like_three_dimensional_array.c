#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long ***m = malloc(sizeof(long long **) * 2);

    /*____________________________________________________







    ____________________________________________________*/

    m[1][2][4] = 100;

    printf("%lld\n", m[1][2][4]);

    /*____________________________________________________







    ____________________________________________________*/

    free(m);

    return 0;
}
