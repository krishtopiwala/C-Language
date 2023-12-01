#include <stdio.h>

// 10 20 30 40 50 --> 50 20 30 40 10

int main()
{
    int n;

    printf("enter n: ");
    scanf("%d", &n);

    int num[n], new[n];

    for (int i = 1; i <= n; i++)
    {
        printf("enter value of array[%d]: ", i);
        scanf("%d", &num[i]);
    }
    
    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            new[1] = num[n];
        }
        else if (i == n)
        {
            new[n] = num[1];
        }

        else
        {
            new[i] = num[i];
        }
        printf("%d ", new[i]);
    }
    return 0;
}