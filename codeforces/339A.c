#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int cmpfunc(const void* a, const void* b)
{
    return (*(int*)a = *(int*)b);
}

int main()
{
    char str[105];
    scanf("%s",str);
    int len = strlen(str);
    int a[60];
    int i,j=0;
    for(i=0;i<len;i=i+2)
    {
        a[j] = str[i]-48;
        j++;
    }
    qsort(a,60, sizeof(int),cmpfunc);
    for(i=0;i<60;i++)
        printf("%d ",a[i]);
    printf("\n");


    j=0;
    for(i=0;i<len;i=i+2)
    {
        if(i!=len)
        {
            if(a[j]!=0)
            {
                str[i]=a[j]+48;
                str[i+1]='+';
            }
            else
                j++;
        }
        j++;
    }
    printf("%s\n",str);
}
