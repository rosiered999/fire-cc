#include<stdio.h>

int main()
{
    int N,i;
    int count = 0,num_agree=0;
    scanf("%d", &N);
    int a[3][N];
    for(i=0;i<N;i++)
    {
        num_agree = 0;
        scanf("%d %d %d", &a[0][i],&a[1][i], &a[2][i]);
        num_agree = a[0][i]+a[1][i]+a[2][i];
        if(num_agree>=2)
            count++;
    }
    printf("%d\n",count);
}
