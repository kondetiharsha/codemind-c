#include<stdio.h>
int main()
{
    int n,c,a=0,b=1,i,temp; 
    scanf("%d",&n); 
    c=a+b;
    temp=n; while(c<=temp) { c=a+b; a=b; b=c; } if(n-a>b-n) { printf("%d",b); } else if(n-a<b-n) { printf("%d",a); } else { printf("%d %d",a,b); }}