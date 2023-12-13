#include<stdio.h>
#include<string.h>
int main()
{
    char A[100001];
    scanf("%s",A);
    int cons=0;
    int length=strlen(A);
    for(int i=0;i<length;i++)
    {
        char c=A[i];
        if(c!='a' && c!='e' && c!='i' && c!='o' && c!='u')
        {
            cons++;
        }
    }
    printf("%d",cons);
    return 0;
}