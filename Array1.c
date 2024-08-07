#include<stdio.h>
int main()
{
    int A[50],n,i;
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

    return 0;

}