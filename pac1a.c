// Call by value
#include<stdio.h>
void swap(int ,int);
int main()
{
    printf("Name:Rohan kumar rai \n Enrollment no:92201703019 \n");
    int a=10;
    int b=20;
    printf("Before swapping the value of a=%d , b=%d\n",a,b);
    swap(a,b);
    printf("After swapping value of a=%d,b=%d\n",a,b);
}    
void swap(int a,int b)
{  
   int temp;
   temp=a;
   a=b;  
   b=temp; 
   printf("After swapping values in function a=%d, b=%d\n",a,b);
}