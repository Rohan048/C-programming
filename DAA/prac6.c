#include<stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}


void selection(int act[], int start[], int finish[], int len){
    int prev = -1;
    for(int i = 0; i<len; i++){
        for(int j = i+1; j<len; j++){
            if(finish[i]>finish[j]){
                swap(&start[i], &start[j]);
                swap(&finish[i], &finish[j]);
                swap(&act[i], &act[j]);
            }
        }
    }
    for(int i =0; i<len; i++){
        printf("%d   ", act[i]);
    }
    printf("\n");
    for(int i =0; i<len; i++){
        printf("%d   ", start[i]);
    }
    printf("\n");
    for(int i =0; i<len; i++){
        printf("%d   ", finish[i]);
    }
    printf("\n");
    printf("Activity order is : \n");
    for(int i = 0; i<len; i++){
        if(prev<start[i]){
            printf("A%d   ",act[i]);
            prev = finish[i];
        }
    }
}


void main(){
    int activity[] = {1,2,3,4,5,6,7,8,9,10,11};
    int start[] ={1,3,0,5,3,5,6,8,8,2,14};
    int finish[] = {4,5,6,7,8,9,10,11,12,15,16};
    //ans = A1 -> A4 -> A8 -> A11  
    selection(activity,start,finish,11);
}
