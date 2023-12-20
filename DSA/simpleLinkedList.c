#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

void insertEnd(int val)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
    temp->next = NULL;

    if (head == NULL)
    {
        head = temp;
        return;
    }
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = temp;
    return;
}

void deleteEnd()
{
    struct node *ptr = head, *p;
    if (head == NULL)
    {
        printf("List is already empty\n");
    }
    else if (head->next == NULL)
    {
        head = NULL;
        free(ptr);
    }
    else
    {
        while (ptr->next != NULL)
        {
            p = ptr;
            ptr = ptr->next;
        }
        p->next = NULL;
        free(ptr);
    }
    return;
}

void insertFirst(int val)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
    temp->next = ptr;
    head = temp;
}

void deleteFirst()
{
    struct node *ptr = head;
    if (head == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        head = head->next;
    }
}

void display()
{
    struct node *ptr = head;
    if (head == NULL)
    {
        printf("List is empty");
    }
    else
    {
        while (ptr != NULL)
        {
            printf("%d ", ptr->data);
            ptr = ptr->next;
        }
    }
    printf("\n");
}

int main()
{
    insertFirst(5);
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);
    insertFirst(1);
    insertEnd(40);
    display();
    deleteEnd();
    display();
    deleteFirst();
    display();
    return 0;
}