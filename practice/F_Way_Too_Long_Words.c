#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
{
    char ar[101];
    scanf("%s",ar);
    int lnth=strlen(ar);
    if(lnth>10)
    {
        printf("%c%d%c\n",ar[0],lnth-2,ar[lnth-1]);
    }
    else
    {
        printf("%s\n",ar);
    }
}
    return 0;
}