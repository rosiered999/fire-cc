#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char str[6] = "hello";
    int a[5];
    char str1[105];
    scanf("%s", str1);
    int i;
    int len = strlen(str1);
    for(i=0;i<len;i++)
    {
        if(strcmp(str[i],'h')!=0 || strcmp(str[i],'e')!=0 ||strcmp(str[i],'l')!=0 || strcmp(str[i],'o')!=0)
        {
            str[i] = '-';    
        }
    }
    int j=0;
    while(j<5)
    {
        for(i=0;i<len;i++)
        {
            if(strcmp(str1[i],str[j])==0)
                a[j]++;
        }
    }
}
