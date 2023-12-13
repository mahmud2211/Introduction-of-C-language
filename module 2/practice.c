#include<stdio.h>
int main()
{
    // int a=10,b=22;
    // int sum= a+b;
    // printf("%d",sum);
    float base,hight, area;
    scanf("%f %f",&base,&hight);
    area = 0.5 * base * hight;
    printf("area of triangular= %f\n",area);
    return 0;
}