#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int i;
    int a[100][3]={0};
    for(i=0;i<n;i++)
    {
        scanf("%d %d %d",&a[i][0],&a[i][1],&a[i][2]);
    }
    int sum[3]={0};
    for(i=0;i<n;i++)
    {
        sum[0] = sum[0] + a[i][0];
        sum[1] = sum[1] + a[i][1];
        sum[2] = sum[2] + a[i][2];
    }
//printf("%d %d %d\n", sum[0],sum[1],sum[2]);
    if(sum[0]==0 && sum[1]==0 && sum[2]==0)
    {
        printf("YES\n");
    }
    else
        printf("NO\n");
}
