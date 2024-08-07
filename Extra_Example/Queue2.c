#include<stdio.h>
#define SIZE 5

int queue[SIZE];
int front = -1, rear = -1;

void insert(int item) {
    if ((front == 0 && rear == SIZE - 1) || (rear == (front - 1) % (SIZE - 1))) {
        printf("Queue is full.\n");
        return;
    } else if (front == -1 && rear == -1) {
        front = rear = 0;
    } else if (rear == SIZE - 1 && front != 0) {
        rear = 0;
    } else {
        rear++;
    }

    queue[rear] = item;
    printf("Element %d has been inserted.\n", item);
}

int delete() {
    if (front == -1 && rear == -1) {
        printf("Queue is empty.\n");
        return -1;
    }

    int item = queue[front];

    if (front == rear) {
        front = rear = -1;
    } else if (front == SIZE - 1) {
        front = 0;
    } else {
        front++;
    }

    return item;
}

void display() {
    if (front == -1 && rear == -1) {
        printf("Queue is empty.\n");
        return;
    }

    printf("Elements of the queue are: ");
    int i = front;
    if (front <= rear) {
        while (i <= rear) {
            printf("%d ", queue[i]);
            i++;
        }
    } else {
        while (i < SIZE) {
            printf("%d ", queue[i]);
            i++;
        }
        i = 0;
        while (i <= rear) {
            printf("%d ", queue[i]);
            i++;
        }
    }
    printf("\n");
}

int main() {
    int choice, item;

    while (1) {
        printf("\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the element to be inserted: ");
                scanf("%d", &item);
                insert(item);
                break;
            case 2:
                item = delete();
                if (item != -1) {
                    printf("Element %d has been deleted.\n", item);
                }
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}


// In this program, we have used an array named queue to store the elements of the circular queue. The front and rear variables keep track of the indices of the front and rear elements respectively. Initially, both front and rear are set to -1 to indicate an empty queue.

// The insert function checks if the queue is full before inserting an element. It considers both the cases of a completely full queue and a partially full queue with a wrap-around from the end to the beginning. If the queue is not full, it inserts the element at the appropriate position and updates the rear variable accordingly.

// The delete function checks if the queue is empty before deleting an element. It returns -1 if the queue is empty, indicating a failure to delete. Otherwise, it deletes the front element, updates the front variable, and returns the deleted element.

// The display function checks if the queue is empty before displaying its elements. It iterates over the queue array, considering both the cases of a non-wrapped and a wrapped queue, and prints all the elements.

// The main function repeatedly prompts the user for a choice of operation and calls the respective function based on their input. It also allows the user to exit the program.

// I hope this helps! Let me know if you have any further questions.