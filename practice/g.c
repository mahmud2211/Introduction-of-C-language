#include <stdio.h>

int main()
{
    char ar[100001];
    fgets(ar, sizeof(ar), stdin);
    for (int i=0;ar[i]!='\0';i++) 
    {
        if(ar[i]==',') 
        {
            ar[i] = ' ';
        } 
        else if(ar[i]>='a'&&ar[i]<='z')
        {
            ar[i]=ar[i]-'a'+'A';
        } else if(ar[i]>='A'&&ar[i]<='Z') 
        {
          ar[i] =ar[i]-'A'+'a';
        }
    }
    printf("%s\n",ar);
    
    return 0;
}
