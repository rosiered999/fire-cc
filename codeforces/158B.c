#include<stdio.h>
#include<stdlib.h>

int cmpfunc(const void* a, const void* b)
{
        return (*(int*)a = *(int*)b);
}

int main()
{
    int i=0,N,j,c=0,sum=0;
    scanf("%d",&N);
    int a[N];
    for(j=0;j<N;j++)
    {
        scanf("%d", &a[j]);
        printf(" %d\n", a[j]);
    }
    while(i<N)
    {
        if(a[i]<4)
        {
        sum = sum+a[i];
    printf("sum %d\n",sum);
        if(sum<4)
        {
            i++;
    printf("i %d\n",i);
            continue;
        }
        else if(sum==4)
        {
            c++;
    printf("c %d\n",c);
            sum =0;
        }
        else
        {
            sum=0;
            continue;
        }
        i++;
        }
        else
        {
            c++;
            i++;
            sum =0;
        }
    }
    printf("%d\n",c);
}
