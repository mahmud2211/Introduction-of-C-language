#include<stdio.h>

// return_type name(parameter)
// {
//     code
//     return what?
// }
int sum(int x,int y)
{
   int sum = x+y; 
   return sum;
}
int main()
{
    int s=sum(10,20);
    printf("%d",s);
    return 0;
}