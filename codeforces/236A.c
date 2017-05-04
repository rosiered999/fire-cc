#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int cmpfunc(const void* a, const void* b)
{
    return *(char*)a - *(char*)b;
}

int main()
{
    char name[105];
    scanf("%s", name);
    
    int i;
    int len=strlen(name);
    int num_chars[100] = {0};
    qsort(name,len,sizeof(char),cmpfunc);
    int j=0;
// printf("%s\n",name);
    for(i=0;i<len;i++)
    {
        if(name[i]!=name[i+1])
        {
//printf("%c ", name[i]);
            num_chars[j] = i+1;
  //          printf("%d ", num_chars[j]);
            j++;
        }
    }
    int count =0;
    for(i=0;i<100;i++)
    {
        if(num_chars[i]==0)
        {
            break;
        }
        else
            count++;
    }
    if(count%2==0)
    {
        printf("CHAT WITH HER!\n");
    }
    else
    {
        printf("IGNORE HIM!\n");
    }
}
