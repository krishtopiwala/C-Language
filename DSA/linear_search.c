#include <stdio.h>

int main()
{
    int n, search;

    printf("enter n: ");
    scanf("%d", &n);

    printf("enter searching element: ");
    scanf("%d", &search);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("enter array[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == search)
        {
            printf("Number is %d position", i);
        }
    }
    return 0;
}