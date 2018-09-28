/* 01. (c) */

#include <stdio.h>
#include <string.h>
 
void reverse(char [], int, int);

int main()
{
    char S[20] ="saa'f asd";
    int j;
    int i;
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