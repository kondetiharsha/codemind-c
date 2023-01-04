#include<stdio.h>
int main()
{
    int a; scanf("%d",&a); int H,M,S; H=a/3600; M=(a%3600)/60; S=a%60; printf("H:M:S-%d:%d:%d",H,M,S);}