#include<math.h>
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[5][5];
    int pos1, pos2;
    int beau1=2, beau2=2;
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d", &a[i][j]);
            if(a[i][j]==1)
            {
                pos1 = i;
                pos2 = j;
            }
        }
    }
    int sum =0 ;
    sum = abs(pos1-beau1)+abs(pos2-beau2);
    printf("%d\n",sum);
}
