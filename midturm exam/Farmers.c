#include <stdio.h>

int main() 
{
  int T;
  scanf("%d",&T);
  for (int i=0;i<T;i++) 
  {
    int M1,M2,D;
    scanf("%d %d %d", &M1,&M2,&D);
    int motfarmer=M1+M2;
    int notundin = D*M1/motfarmer;
    int bakidin= D-notundin;
    printf("%d\n",bakidin);
  }

  return 0;
}