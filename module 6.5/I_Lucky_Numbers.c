#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int num1=n/10;
    int num2=n%10;
    if(num2==0 || num1%num2==0 || num2%num1==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}