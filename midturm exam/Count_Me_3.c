#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        char a[10001];
        scanf("%s",a);
        int cnt=0,capital=0,small=0;
        for(int i=0;a[i]!=0;i++)
        {
            char b=a[i];
            if(b>='A'&& b<='Z')
            {
                capital++;
            }
            else if(b>='a'&& b<='z')
            {
                small++;
            }
            else if(b>='0'&& b<='9')
            {
                cnt++;
            }
        }
        printf("%d %d %d\n",capital,small,cnt);
    }
    return 0;
}