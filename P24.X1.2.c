#include<stdio.h>
int main()
{
    int a,b,c,d,sum,average;
    printf("Enter:");
    scanf("%d,%d，%d，%d",&a,&b,&c,&d);
    sum=a+b+c+d;
    average=sum/4.0;
    printf("sum=%d,average=%.1f\n",sum,average);
    return 0;
}