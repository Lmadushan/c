/* 01. (b) */
/*
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
*/
/* 01. (c) */

#include <stdio.h>
#include <string.h>
 
void reverse(char [], int, int);

int main()
{
    char S[20];
    int j;
    int i;

    printf("Enter a string to reverse: ");
    scanf("%s", S);
    j = strlen(S);
    reverse(S, i, j - 1);
    printf("The string after reversing is: %s\n", S);
    return 0;
}
 
void reverse(char S[], int i, int j)
{
    char temp;
    temp = S[i];
    S[i] = S[j - i];
    S[j - i] = temp;
    if (i == j / 2)
    {
        return;
    }
    reverse(S, i + 1, j);
}