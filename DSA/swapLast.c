#include <stdio.h>

int main()
{
    // 10 20 30 40 50 -> 20 30 40 50 10

    int n;

    printf("enter n: ");
    scanf("%d", &n);

 
    int arr[n], temp[n];

    for (int i = 1; i <= n; i++)
    {
        printf("enter array[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    for (int i = 1; i <= n; i++)
    {
        if (i != n)
        {
            temp[i] = arr[i + 1];
        }
        else
        {
            temp[n] = arr[1];
        }
    }

    for (int i = 1; i <= n; i++)
    {
        printf("%d ", temp[i]);
    }
}