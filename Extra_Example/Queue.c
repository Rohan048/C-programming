#include <stdio.h>
#define SIZE 5

int queue[SIZE];
int front = -1, rear = -1;

int isEmpty()
{
    if (front == -1 && rear == -1)
        return 1;
    else
        return 0;
}

int isFull()
{
    if (rear == SIZE - 1)
        return 1;
    else
        return 0;
}

void insert(int item)
{
    if (isFull())
        printf("queue is full \n");
    else
    {
        if (isEmpty())
            front = rear = 0;
        else
            rear = rear + 1;
        queue[rear] = item;
        printf("%d inserted successfully. \n", item);
    }
}

void delete()
{
    if (isEmpty())
        printf("queue is empty \n");
    else
    {
        int deletedItem = queue[front];
        if (front == rear)
            front = rear = -1;
        else
            front = front + 1;
        printf("%d deleted successfully \n", deletedItem);
    }
}

void display()
{
    if (isEmpty())
        printf("queue is empty \n");
    else
    {
        printf("Elements in the queue are: ");
        for (int i = front; i <= rear; i++)
            printf("%d", queue[i]);
        printf("\n");
    }
}

int main()
{
    int choice, item;
    do
    {

        printf("\n Queue Operations \n");
        printf("1. insert\n");
        printf("2. delete\n");
        printf("3. Display \n");
        printf("4. Exit\n");
        printf("Enter your choice:");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the elements to insert:\n");
            scanf("%d", &item);
            insert(item);
            break;
        case 2:
            delete ();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("Exiting the program \n");
            break;

        default:
            printf("Invalid choice \n");
        }
    } while (choice != 4);
    return 0;
}

