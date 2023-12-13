#include<stdio.h>
int main()
{
    int n;
    {
        scanf("%d",&n);
    }
    int pos=0;
    int neg=0;
    for(int i=0;i<n;i++)
    {
        int m;
        scanf("%d",&m);
        if(m>0)
        {
            pos+=m;
        }
        if(m<0)
        {
            neg+=m;
        }
    }
    printf("%d %d",pos,neg);
    return 0;
}