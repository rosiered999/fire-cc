#include<stdio.h>
#include<string.h>

int main()
{
    char str[105];
    scanf("%s", str);
    int i,flag=0;
    int len =strlen(str);
    for(i=0;i<len;i++)
    {
        if(str[i]=='H' || str[i]=='Q' || str[i]=='9')
        {
            printf("YES\n");
            flag =1;
            break;
        }
    }
    if(flag==0)
    {
        printf("NO\n");
    }
    return 0;
}
