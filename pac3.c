/*Implement a program using array for stack that performs operations (a)
PUSH (b) POP (c) PEEP (d) CHANGE (e) DISPLAY */
#include<stdio.h>
#define MAX 5
int S[MAX], top=-1;
int isFull(){
    if(top==MAX-1)
        return 1;
    else
        return 0;
}
void push(int x)
{
    if(isFull())
        printf("Stack is OverFlow.");
    else{
        top++;
        S[top]=x;
        printf("Value pushed successfully.");
    }
}
int isEmpty(){
    if(top==-1)
        return 1;
    else
        return 0;
}
void pop(){
    if(isEmpty())
        printf("\nStack is Underflow.");
    else{
        printf("%d is deleted.",S[top]);
        top--;
    }
}
void display(){
    int i;
    if(isEmpty())
        printf("Stack is Empty.");
    else{
        printf("Stack is: ");
        for(i=0;i<=top;i++)
            printf("%d ",S[i]);
    }
}
void peep(){
    if(isEmpty())
        printf("Stack is Empty.");
    else
        printf("Topmost element is %d.",S[top]);
}
void change(){
    int index, value;
    printf("Enter an Index:");
    scanf("%d",&index);
    printf("Enter a value:");
    scanf("%d",&value);
    if(top-index+1 < 0)
        printf("Invalid Index.");
    else{
        S[top-index+1] = value;
        printf("Value changed Successfully.");
    }
}
void main()
{
    int choice,v;
    while(1)
    {
        printf("\n\nStack Operations:");
        printf("\n1. Push\n2. Pop\n3. Peep\n4. Change");
        printf("\n5. Display\n6. isEmpty\n7. isFull\n 8. Exit");
        printf("\nEnter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: printf("Enter a Value:");
                    scanf("%d",&v);
                    push(v);
                    break;
            case 2: pop(); break;
            case 3: peep(); break;
            case 4: change(); break;
            case 5: display(); break;
            case 6: if(isEmpty())
                        printf("Yes, Stack is Empty.");
                    else
                        printf("No, Stack is Not Empty.");
                        break;
            case 7:
                    if(isFull())
                        printf("Yes, Stack is Full.");
                    else
                        printf("No, Stack is Not Full.");
                        break;
            case 8: exit(0);
            default: printf("\nInvalid Choice!");
        }
    }
}