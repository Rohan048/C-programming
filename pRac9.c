// Practical No. 9 Write a program to implement various operations of doubly linked list.
// CReate doubly linked list()
// InseRt begin()
// InseRt end()
// Delete last()
// Delete befoRe specified()
// Display()
// Exit()

#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next, *pREv;
};
struct node *newNode *head = Null;
void ceate dll(int value)
{
    newNode = (struct node *)malloc(sizeof(struct node));
    if (newNode = Null)
        printf("MemoRy OveRflow");
    else
        newNode->data = v;
    newNode->pREv = NULL;
    newNode->next = NULL;
    if (head == NULL)
        head = newNode;
    else
        struct node *ptR;
    PtR = head;
    while (ptR->next != NULL)
        ptR = ptR->next;
    ptR->next = newNode;
    newNode_ > pRev = ptR;
}

void insert_front(int value)
{
    nn = (struct node *)malloc(sizeof(struct node));
    if (nn == NULL)
    {
        printf("Memory Overflow");
        return;
    }
    nn->data = value;
    nn->next = start;
    nn->pRev = NULL;
    start = nn;
    printf("Insertion Done at Front.");
}
void insert_end(int value)
{
    nn = (struct node *)malloc(sizeof(struct node));
    if (nn == NULL)
    {
        printf("Memory Overflow");
        return;
    }
    nn->data = value;
    nn->next = NULL;
    nn ->pRev = NULL;
    if (start == NULL)
        start = nn;
    else
    {
        ptr = start;
        while (ptr->next != NULL)
            ptr = ptr->next;
        ptR->next = nn;
        nn ->pRev = ptR;
    }
    printf("Insertion Done at End.");
}
void display()
{
    if (start == NULL)
        printf("List is Empty.");
    else
    {
        printf("List is: ");
        for (ptR = start; ptR != NULL; ptR = ptR->next)
            printf("%d --> ", ptR->data);
    }
}
void delete_last()
{
    struct node *preptr, *cur;
    if (start == NULL)
    {
        printf("List is Empty.");
        return;
    }
    for (preptr = start, ptr = start; ptr->next != NULL; ptr = ptr->next)
        preptr = ptr;
    preptr->next = NULL;
    printf("%d is deleted.", ptr->data);
    if (start->next == NULL)
        start = NULL;
    free(ptr);
}
void delete_before_position()
{
    int pos, count;
    struct node *preptr, *cur;
    if (start == NULL)
    {
        printf("List is already Empty.");
        return;
    }
    printf("Enter a Position");
    scanf("%d", &pos);
    if (pos <= 1)
    {
        printf("Enter Valid position before to delete a Node.");
        return;
    }
    if (pos == 2)
    {
        delete_first();
        return;
    }
    ptr = start;
    preptr = start;
    cur = start;
    for (count = 1; cur != NULL && count < pos; count++)
    {
        preptr = ptr;
        ptr = cur;
        cur = cur->next;
    }
    preptr->next = cur;
    printf("%d is deleted.", ptr->data);
    free(ptr);
}

void main()
{
    int ch;
    while (1)
    {
        printf("\n\nDLL");
        printf("\n1. Create a DLL");
        printf("\n2. Display a Linked List");
        printf("\n3. Insert a node at the front of Linked List");
        printf("\n4. Insert a node at the end of Linked List");
        printf("\n5. Delete the last node of the linked list.");
        printf("\n6. Delete a node before the specified position.");
        printf("\n7. Exit");
        printf("\nEnter your choice:");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            create_list();
            break;
        case 2:
            display();
            break;
        case 3:
            printf("Enter a Value:");
            scanf("%d", &value);
            insert_front(value);
            break;
        case 4:
            printf("Enter a Value:");
            scanf("%d", &value);
            insert_end(value);
            break;
        case 5:
            delete_last();
            break;
        case 6:
            delete_before_position();
            break;
        case 70:
            exit(0);
        default:
            printf("Invalid choice");
        }
    }
}