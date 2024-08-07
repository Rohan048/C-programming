// malloc 
#include<stdio.h>
#include<stdlib.h>
    int main(){
    printf("Name:Rohan kumar rai\nEnrollment no:92201703019\n");
    int n, *ptr, i;
    printf("Enter the size of data: ");
    scanf("%d", &n);
    ptr = (int *)malloc(n*sizeof(int));
    printf("Enter your data: ");
    for(i=0; i<n; i++){
        scanf("%d", ptr+i);
    }
    for(i=0; i<n; i++){
        printf("%d\t", *(ptr+i));
    }
    free(ptr);
     return 0;
}