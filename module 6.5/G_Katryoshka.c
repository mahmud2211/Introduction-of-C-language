#include<stdio.h>
int main()
{
 int e,m,b;
 scanf("%d %d %d",&e,&m,&b);
 int Katryoshka=0;
 Katryoshka=e/2;
 if(m<Katryoshka)
{
    Katryoshka=m;
}
if(b<Katryoshka)
{
    Katryoshka=b;
}
printf("%d",Katryoshka);
return 0;

}