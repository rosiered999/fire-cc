#include<stdio.h>
#include<string.h>

int main()
{
    char str[105];
    int i,count,len;
    int flag = 0;
    scanf("%s", str);
    len = strlen(str);
    for(i=0;i<len-1;i++)
    {
        if(str[i]==str[i+1])
            count++;
        else count = 0;
        //printf("%d\n",count);
        if(count>=6)
        {
            printf("YES\n");
            flag = 1;
            break;
        }
    }
    if(flag==0)
        printf("NO\n");

    return 0;
}
