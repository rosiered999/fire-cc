#include<stdio.h>
#include<string.h>
int main()
{
    char str[1005];
    scanf("%s", str);
    if(str[0]>96)
        str[0]-=32;
    printf("%s\n", str);
}
