#include <stdio.h>
#define SIZE 5

int queue[SIZE];
int front = -1;
int rear = -1;

int isEmpty()
{
    if (front == -1 && rear == -1)
        return 1;
    else
        return 0;
}

int isFull()
{
    if ((rear + 1) % SIZE == front)
        return 1;
    else
        return 0;
}

void insert(int item)
{
    if (isFull())
    {
        printf("Queue is full.\n");
    }
    else
    {
        if (isEmpty())
            front = rear = 0;
        else
            rear = (rear + 1) % SIZE;
        queue[rear] = item;
        printf("%d inserted successfully.\n", item);
    }
}

void delete()
{
    if (isEmpty())
    {
        printf("Queue is empty.\n");
    }
    else
    {
        if (front == rear)
            front = rear = -1;
        else
            front = (front + 1) % SIZE;
        printf("%d deleted successfully.\n", front);
    }
}

void display()
{
    if (isEmpty())
    {
        printf("Queue is empty.\n");
    }
    else
    {
        printf("Queue elements are: ");
        for (int i = front; i != rear; i = (i + 1) % SIZE)
            printf("%d ", queue[i]);
        printf("%d", queue[rear]);
        printf("\n");
    }
}

void update(int position, int value)
{
    if (position < 1 || position > (rear + 1) % SIZE)
    {
        printf("Invalid position.\n");
    }
    else
    {
        int i = front;
        int count = 1;
        while (count < position)
        {
            i = (i + 1) % SIZE;
            count++;
        }
        queue[i] = value;
        printf("%d updated successfully.\n", value);
    }
}

int main()
{
    int choice, item, position;

    do
    {
        printf("\nCircular Queue Operations:\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Update\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the element to be inserted: ");
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
            printf("Enter the position to update: ");
            scanf("%d", &position);
            printf("Enter the new element: ");
            scanf("%d", &item);
            update(position, item);
            break;

        case 5:
            printf("Exiting...\n");
            return 0;

        default:
            printf("Invalid choice!\n");
            break;
        }
    } while (choice != 5);
    return 0;
}
