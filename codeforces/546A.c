#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//initialisation of sum variable unnecessary use of array for sum storage

int main()
{
    int k,n,w;
    scanf("%d %d %d", &k,&n,&w);
    int i,sum=0;
    for(i=0;i<=w;i++)
    {
        sum = sum+i;
    }
    int cost = k*sum;
    int borrow =0;
    borrow = n-cost;
    if(borrow>=0)
    {
        printf("0\n");
    }
    else if(borrow<0)
    {
        printf("%d\n", abs(borrow));
    }
}
