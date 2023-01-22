#include<stdio.h>
#include<math.h>
int main()
{
    int n,c=0,r,r1,sum=0; scanf("%d",&n); int m=n; while(m>0) { r=m%10; c++; m=m/10; } int d=n; while(d>0) { r1=d%10; sum=sum+pow(r1,c); c--; d=d/10; } if(sum==n) { printf("True"); } else { printf("False"); }}