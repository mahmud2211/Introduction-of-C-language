#include<stdio.h>
#include<string.h>
int main()
{
    char a[13];
    // gets(a);
    fgets(a,13,stdin);
    printf("%s",a);

    return 0;
}