/*problems with this submission:
 *did not read q properly
 *did not account for corner case a and A
 *stringshould have a few extra chars
 */


#include<stdio.h>
#include<string.h>
int main()
{
    char word[105];
    int i;
    int cap[105];
    int accident = 0;
    scanf("%s", word);
    //printf("%s\n", word);
    int len = strlen(word);
    //printf("%d\n", len);
    for(i=0;i<len;i++)
    {
        if(word[i]>96)
            cap[i] = 0;
        else if(word[i]<97)
            cap[i] = 1;
    }
    int flag = 1;
    for(i=1;i<len;i++)
    {
        if(cap[i]==0)
        {
            flag = 0;
            break;
        }
    }
    if(flag==1)
        accident = 1;
    //printf("accident %d\n",accident);
    if(accident==1)
    {
        for(i=0;i<len;i++)
        {
            if(word[i]>96)
                word[i]-=32;
            else if(word[i]<97)
                word[i]+=32;
        }
    }

    printf("%s\n", word);
    return 0;
}
