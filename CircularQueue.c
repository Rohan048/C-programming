#include <stdio.h>
#define SIZE 5

int queue[SIZE];
int front = -1;
int rear = -1;

int isEmpty() {
    if (front == -1 && rear == -1)
        return 1;
    else
        return 0;
}

int isFull() {
    if ((rear+1)%SIZE == front)
        return 1;
    else
        return 0;
}

void insert(int item) {
    if (isFull()) {
        printf("Queue is full.\n");
    } else if (isEmpty()) {
        front = rear = 0;
        queue[rear] = item;
        printf("Element inserted successfully.\n");
    } else {
        rear = (rear+1)%SIZE;
        queue[rear] = item;
        printf("Element inserted successfully.\n");
    }
}

void delete() {
    if (isEmpty()) {
        printf("Queue is empty.\n");
    } else if (front == rear) {
        front = rear = -1;
        printf("Element deleted successfully.\n");
    } else {
        front = (front+1)%SIZE;
        printf("Element deleted successfully.\n");
    }
}

void display() {
    if (isEmpty()) {
        printf("Queue is empty.\n");
    } else {
        int i = front;
        printf("Queue elements are: ");
        while (i != rear) {
            printf("%d ", queue[i]);
            i = (i+1)%MAX_SIZE;
        }
        printf("%d", queue[rear]);
        printf("\n");
    }
}

void update(int pos, int x) {
    if (pos < 1 || pos > (rear+1)%MAX_SIZE) {
        printf("Invalid position. Update failed.\n");
    } else {
        int i = front;
        int count = 1;
        while (count < pos) {
            i = (i+1)%MAX_SIZE;
            count++;
        }
        queue[i] = x;
        printf("Element updated successfully.\n");
    }
}

int main() {
    int choice, element, position;
    
    while (1) {
        printf("\nCircular Queue Operations:\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Update\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                printf("Enter the element to be inserted: ");
                scanf("%d", &element);
                insert(element);
                break;
                
            case 2:
                delete();
                break;
                
            case 3:
                display();
                break;
                
            case 4:
                printf("Enter the position to update: ");
                scanf("%d", &position);
                printf("Enter the new element: ");
                scanf("%d", &element);
                update(position, element);
                break;
                
            case 5:
                printf("Exiting...\n");
                return 0;
                
            default:
                printf("Invalid choice!\n");
                break;
        }
    }
}
