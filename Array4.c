//Swapping with third variable

#include<stdio.h>

int main(){
    int a,b,temp;
    printf("enter the value of a \n");
    scanf("%d",&a);
    printf("Enter the value of b \n");
    scanf("%d",&b);
    printf("Enter the value of temp \n");
    scanf("%d",&temp);

   temp=a;
   a=b;
   b=temp;
    printf("After swapping the value of a %d\n",a);
    printf("After swapping the value of b %d\n",b);

}