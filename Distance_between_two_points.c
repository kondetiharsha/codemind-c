#include<stdio.h>
#include<math.h>
int main()
{ int x1,x2,y1,y2; scanf("%d%d%d%d",&x1,&x2,&y1,&y2); float f; f=sqrt((y1-x1)*(y1-x1)+(y2-x2)*(y2-x2)); printf("%.4f",f);}