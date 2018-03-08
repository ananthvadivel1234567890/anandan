#include<stdio.h>
void main()
{
    int h,m,t;
    printf("enters the minutes");
    scanf("%d",&m);
    m=m%60;
    h=m/60;
    printf("%d\t%d",h,m);
    }
