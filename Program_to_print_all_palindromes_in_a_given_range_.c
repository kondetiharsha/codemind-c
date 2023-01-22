#include<stdio.h>
int main()
{
    int a,b,i,r,rev,m; scanf("%d%d",&a,&b); for(i=a;i<=b;i++) { rev=0; m=i; while(m>0) { r=m%10; rev=rev*10+r; m=m/10; } if(rev==i) { printf("%d ",rev); } }}