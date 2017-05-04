#include<stdio.h>

int main()
{
    int board[16][16];
    int M,N;
    scanf("%d %d", &M,&N);
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
            board[i][j] = -1;
        }
    }

}
