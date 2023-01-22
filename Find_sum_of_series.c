#include<stdio.h>
int main()
{
    float n,a=1,d=1; float i,r=0; scanf("%f",&n); for (i=1;i<=n;i++) { r=(1/i)+r; } printf("%.2f",r);}