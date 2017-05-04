#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main()
{
    char num[19];
    scanf("%s", num);
    int i,len,count=0;
    len = strlen(num);
    for(i=0;i<len;i++)
    {
        if(num[i]-'0'==4||num[i]-'0'==7)
        {
            count++;
        }
    }
    
    if(count==4||count==7)
    {
        printf("YES\n");
    }
    else printf("NO\n");
}
