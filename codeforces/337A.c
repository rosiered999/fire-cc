#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int cmpfunc(const void* a, const void* b)
{
    return (*(int*)a - *(int*)b );
}
int main()
{
    int n,m;
    scanf("%d %d", &n,&m);
    int i,j;
    int a[50];
    for(i=0;i<m;i++)
    {
        scanf("%d", &a[i]);
    }
    qsort(a,m,sizeof(int),cmpfunc);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            
        }
    }
}
