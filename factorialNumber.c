#include <stdio.h>

int main()
{
    int num, i, fact = 1;

    printf("enter any number: ");
    scanf("%d", &num);

    for (i = num ; i >= 1; i--)
    {
        fact = fact * i;
    }
    printf("%d ", fact);
    return 0;
}