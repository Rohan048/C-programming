#include <stdio.h>
int factorial(int n){
    //base case
    if(n<2) return 1;
    //recursion
    return n*factorial(n-1);
}
void main(){
    printf("\nName:Rohan Kumar Rai \nEnrollment no:92201703019\n");
    printf("-------------------------------\n");
    int num;
    int ans=1;
    printf("Enter number:");
    scanf("%d",&num);

    //invalid cases
    if (num<0){
        printf("Negative number id nonvalid for factorial\n");
        return;
    }
    printf("\n-------------------------------\n");

    //factorial using recursion method

    printf("factorial of %d using recursion is %d \n",num,factorial(num));
    printf("\n-------------------------------\n");

    //factorial using iterative method

    for (int i = 2; i <= num; i++)
    {
        ans*=i;
    }
    printf("factorial of %d using iteration is %d \n",num,factorial(num));
    printf("\n-------------------------------\n");
    

}