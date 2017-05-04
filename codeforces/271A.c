#include<stdio.h>
#include<stdlib.h>
int cmpfunc (const void * a, const void * b)
{
    return ( *(int*)a - *(int*)b );
}
int digitise(int num)
{
    int i,j;
    int a = num;
    int count_dig =0;
    while(a>0)
    {
        a = a/10;
        count_dig++;
    }

    int digit[count_dig];
    for(i=0;i<count_dig;i++)
    {
        digit[count_dig] = num%10;
        num = num/10;
    }

    printf("%d\n", count_dig);
    for(i=0;i<=count_dig;i++)
    {
        for(j=0;j<count_dig;j++)
        {
            if(digit[i]==digit[j] && i!=j)
                return 1;
        }
    }
    return 0;
}

int main()
{
    int i,yes;
    int a[10000]={0};
    for(i=10;i<19;i++)
    {
        yes = digitise(i);
        printf("%d %d\n", i,yes);
    }
}
