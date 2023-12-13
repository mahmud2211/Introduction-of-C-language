#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int m,o;
    scanf("%d %d",&m,&o);
    ar[m]=o;
    for(int i=n-1;i>=0;i--)
    {
        printf("%d ",ar[i]);
    }
    return 0;
}