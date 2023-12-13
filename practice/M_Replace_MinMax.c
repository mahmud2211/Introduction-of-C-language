#include<stdio.h>
#include<string.h>
int main()
{
    int  n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int min=ar[0];
    int max=ar[0];
    int minimum=0;
    int maximum=0;
    for(int i=0;i<n;i++)
    {
        if(ar[i]<min)
        {
            min=ar[i];
            minimum=i;
        }
        if(ar[i]>max)
        {
            max=ar[i];
            maximum=i;
        }
    }    
        int temp=ar[minimum];
        ar[minimum]=ar[maximum];
        ar[maximum]=temp;
        for(int i=0;i<n;i++)
        {
            printf("%d ",ar[i]);
        }

    
    return 0;
}