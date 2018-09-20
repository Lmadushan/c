/* 01. (b) */

#include <stdio.h>

int power(int x, int n)
{
    if (n != 0)
        return (x*power(x, n-1));
    else
        return 1;
}

int main()
{
    int x, n, result;

    x=3;
    n=10;

    result = power(x, n);

    printf("%d^%d = %d", x, n, result);
    return 0;
}
