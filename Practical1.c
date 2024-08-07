// Introduction to pointers. Implement Call by value and Call by Reference.


#include<stdio.h>
int main()
{
    int A[50],n,i,pos;
    int B[]={1,2,3,4,5};

    printf("Enter the size of array\n");
    scanf("%d",&n);
    printf("Enter array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
     printf("Array elements\n");
    for(i=0;i<n;i++)
    printf("%d\n",A[i]);

    printf("Enter the position\n");
    scanf("%d",&pos);
    printf("Deleted element is %d\n",A[pos]);
    for(i=pos-1;i<n;i++)
    {
        A[i]=A[i+1];
    }
    printf("Array elements\n");
    for(i=0;i<n-1;i++)
    {
        printf("%d\n",A[i]);
    }



}