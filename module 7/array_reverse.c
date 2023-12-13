#include<stdio.h>
int main()
{
    // int n;
    // scanf("%d",&n);
    int ar[5];
   
    for(int i=0;i<5;i++)
    {
        scanf("%d",&ar[i]);
    }
    for( int i=5-1;i>=0;i--)
    {
        printf("%d ",ar[i]);
    }
    return 0;
}