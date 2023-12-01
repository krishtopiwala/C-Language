#include <stdio.h>
#define n 5
int arr[n], top = -1;

int display()
{
    for (int i = 0; i <= top; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int insertEnd(int val)
{
    if (top >= n - 1)
    {
        printf("Stack is full.....\n");
    }
    else
    {
        top++;
        arr[top] = val;
    }
}

int deleteEnd()
{
    if (top == -1)
    {
        printf("Stack is empty.......\n");
    }
    else
    {
        top--;
    }
}

int main()
{
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);
    insertEnd(40);
    insertEnd(50);
    deleteEnd();
    deleteEnd();
    display();
    return 0;
}