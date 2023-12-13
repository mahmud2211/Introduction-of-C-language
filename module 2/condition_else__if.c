#include<stdio.h>
int main()
{
    int tk;
    scanf("%d",&tk);
    if(tk>=5000)
    {
        printf("penang jabo\n");
        if(tk>=10000)
        {
            printf("kualalampur jabo\n");
        }
        else
        {
            printf("penang theke back krbo\n");
        }
    }
    else
    {
        printf("kothao jabo na\n");
    }
    return 0;
}