#include <stdio.h>
#include <stdlib.h>
struct node
{
    int x;
    struct node *next;
} * start;
void add_node();
void display();
void move();
void search();
void main()
{
    int op;
    do
    {
        printf("\n_____menu_____");
        printf("\n1.add_node    2.display     3.exit     4.move    5.search\n");
        printf("\nEnter your choice");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            add_node();
            break;
        case 2:
            display();
            break;
        case 3:
            printf("\nBye");
            break;
        case 0:
            move();
            break;
        case 5:
            search();
            break;
        default:
            printf("\ninvalid choice");
            break; /* code */
        }

    } while (op != 3);
}
void add_node()
{
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("\nMemory is full");
    }
    else
    {
        printf("\nEnter the value of x\n");
        scanf("%d", &ptr->x);
        ptr->next = start;
        start = ptr;
    }
}
void display()
{
    struct node *ptr;
    ptr = start;
    while (ptr != NULL)
    {
        printf("x=%d", ptr->x);
        ptr = ptr->next;
    }
}
void move()
{
    struct node *last, *second_last;
    last = second_last = start;
    while (last->next != NULL)
    {
        second_last = last;
        last = last->next;
    }

    last->next = start;
    start = last;
    second_last->next = NULL;
}
void search()
{
    struct node *ptr, *new, *temp;
    int s, flag = 0;
    printf("\nEnter the element");
    scanf("%d", &s);
    ptr = start;
    while (ptr != NULL)
    {
        if (ptr->x == s)
        {
            flag = 1;
            break;
        }
        ptr = ptr->next;
    }
    ptr = start;
    if (flag == 0)
    {
        printf("\nNot found");
    }
    else
    {
        new = (struct node *)malloc(sizeof(struct node));
        printf("\nEnter the value of x in the new node");
        scanf("%d", &new->x);
        while (ptr->x != s)
        {
            temp = ptr;
            ptr = ptr->next;
        }
        new->next = temp->next;
        temp->next = new;
    }
}