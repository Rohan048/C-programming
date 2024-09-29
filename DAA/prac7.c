 #include<stdio.h>
 int min(int a , int b) {
    if(a <= b) {
        return a;
    } else {
        return b;
    }
}
void making_change(int n,int c,int value[])
{
    int i,j,m[n+1][c+1];
    for(j=0;j<=c;j++)
    {
        m[0][j]=9999;
    }
    m[0][0]=0;
    for(i=0;i<=n;i++)
    {
        m[i][0]=0;
    }
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= c; j++)
        {
            if (j-value[i-1]<0)
            {
                m[i][j]=m[i-1][j];
            }
            else
            {
                m[i][j]=min(m[i-1][j],1+m[i][j-value[i-1]]);
            }
        }
    }
    printf("The number of required coins are : %d",m[n][c]);
}
void main()
{
    int i,c,n;
    printf("Enter the number of different coins : ");
    scanf("%d",&n);
    int value[n];
    printf("Enter the total cost : ");
    scanf("%d",&c);
    printf("Enter the values of different coins------------------ \n");
    for(i=0;i<n;i++)
    {
        printf("Enter the value of coin %d : ",i+1);
        scanf("%d",&value[i]);
    }
     making_change(n,c,value);
}   