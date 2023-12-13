#include<stdio.h>
int main()
{
int TK;
scanf("%d",&TK);
if (TK>=100)
{
   printf("biriyani khabo");
}
else if (TK>=50)
{
   printf("yollow rice khabo");
}
else if(TK>=20)
{
    printf("nasi goreneg ayam khabo");
}
else if(TK>=10)
{
    printf("mango susu");
}
else
{
   printf("kichui khabo na");
}
return 0;
}