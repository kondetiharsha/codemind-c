#include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    int a[n],i;
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i]; 
    }
    printf("%d ",sum);
}