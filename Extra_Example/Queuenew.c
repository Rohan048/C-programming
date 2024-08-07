#include <stdio.h>

#define SIZE 5

int queue[SIZE];
int front = -1;
int rear = -1;

void insert(int value) {
    if (rear == SIZE - 1) {
        printf("Queue is full.\n");
    } else {
        if (front == -1) {
            front = 0;
        }
        rear=rear+1;
        queue[rear] = value;
        printf("%d inserted successfully.\n", value);
    }
}

void delete() {
    if (front == -1 || front > rear) {
        printf("Queue is empty.\n");
    } else {
        printf("%d deleted successfully.\n", queue[front]);
        front++;
        if (front > rear) {
            front = rear = -1;
        }
    }
}

void display() {
    if (front == -1 || front > rear) {
        printf("Queue is empty.\n");
    } else {
        printf("Queue elements: ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

void update(int position, int value) {
    if (position >= front && position <= rear) {
        queue[position] = value;
        printf("Element at position %d updated with %d.\n", position, value);
    } else {
        printf("Invalid position.\n");
    }
}

int main() {
    int choice, value, position;

    do {
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Update\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the value to be inserted: ");
                scanf("%d", &value);
                insert(value);
                break;
            case 2:
                delete();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Enter the position to be updated: ");
                scanf("%d", &position);
                printf("Enter the new value: ");
                scanf("%d", &value);
                update(position, value);
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}
