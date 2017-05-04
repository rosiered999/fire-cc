#include<stdio.h>
#include<string.h>

int main()
{
    int i;
    int len1,len2;
    int cnt1=0, cnt2=0;
    char str1[105],str2[105];
    scanf("%s", str1);
    scanf("%s",str2);
    len1 = strlen(str1);
    len2 = strlen(str2);
    for(i=0;i<len1;i++)
    {
        if(str1[i]<96)
            str1[i]+=32;
    }
    for(i=0;i<len2;i++)
    {
        if(str2[i]<96)
            str2[i]+=32;
    }
    for(i=0;i<101;i++)
    {
        str1[i]-= str2[i];
    }
    int cnt=0;
    for(i=0;i<len1;i++)
    {
        if(str1[i]>0)
            cnt1++;
        if(str1[i]<0)
            cnt2++;
        if(str1[i]==0)
            cnt==0;
    }
    if(cnt==0)
        printf("0\n");
    else if(cnt1>0)
        printf("-1\n");
    else if(cnt2>0)
        printf("1\n");
}
