#include<stdio.h>

void swap1(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void swap2(float *a, float *b){
    float temp = *a;
    *a = *b;
    *b = temp;
}

void sort(int *p, int *w,float *r,int len){
    for(int i = 0; i<len; i++){
        for(int j = i+1; j<len; j++){
            if(r[i]<r[j]){
                swap1(&p[i],&p[j]);
                swap1(&w[i],&w[j]);
                swap2(&r[i],&r[j]);
            }
        }
    }
}

float knapsack(int *p, int *w, int len, int capacity){
        float ratio[len],ans=0;
        for(int i = 0; i<len; i++){
            ratio[i] = (float)p[i]/w[i];
        }
        sort(p,w,ratio,len);
        for(int i = 0; i<len; i++){
            if(w[i]<=capacity){
                ans=ans+p[i];
                capacity-=w[i];
            }
            else{
                ans+= ratio[i]*capacity;
                return ans;
            }
            if(capacity==0){ return ans;}
        }
        
}


void main(){
    printf("\nName : Rohan Kumar rai \nEnrollment No. : 92201703019\n");    
    int size,capacity;
    printf("Enter size of arrays : ");
    scanf("%d", &size);
    int profit[size], weight[size];
    printf("Enter %d values of Profit and weight : \n",size);
    for(int i = 0; i<size; i++){
        printf("Enter value of weight%d : ",i);
        scanf("%d",&weight[i]);
        printf("Enter value of profit%d : ",i);
        scanf("%d",&profit[i]);
    }
    printf("Enter Capacity of Container : ");
    scanf("%d",&capacity);
    printf("\n\nProfit  --> weight\n");
    for(int i = 0; i<size; i++){
      printf("%d --> %d\n ",profit[i],weight[i]);
    }
    printf("\nMaximum profit gain is : %f\n", knapsack(profit,weight,size,15));

}