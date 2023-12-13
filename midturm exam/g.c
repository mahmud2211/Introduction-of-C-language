#include<stdio.h>
#include<string.h>
int main() 
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        for (int i=0;i<n;i++) 
        {
            scanf("%d",&a[i]);
        }
        int x;
        scanf("%d",&x);
        int jodipai=0;
        for (int i=0;i<n;i++) 
        {
            if (a[i]==x) 
            {
                jodipai=1;
                break; 
            }
        }
        if (jodipai) 
        {
            printf("YES\n");
        } 
        else 
        {
            printf("NO\n");
        }
    }

    return 0;
}
