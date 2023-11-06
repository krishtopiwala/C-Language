#include <stdio.h>

int main()
{
    int num, i, total = 0;

    printf("enter any number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num - 1; i++)
    {
        if (num % i == 0)
        {
            total = total + i;
        }
    }

    if (total == num)
    {
        printf("%d is a perfect number", num);
    }
    else
    {
        printf("%d is not a perfect number", num);
    }
    return 0;
}