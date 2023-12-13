#include<stdio.h>
int main()
{
    int N;
    int i;
    scanf("%d",&N);
    for(i=21;i<=N;i=i+1)
    {
        if(N%3==0)
        {
            printf("%d\n");
        }
        else
        {
            printf("nothing");
        }
    }
    
    return 0;
}

   