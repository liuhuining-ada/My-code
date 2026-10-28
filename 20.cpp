#include<stdio.h>
int main ()
{int x,y,t;
scanf("%d %d",&x,&y);
if(x>y)
{t=x;
x=y;
y=t;
 } for(int i=x;i<=y;i++)
 {for(int j=x;j<=i;j++)
 printf("%d*%d=%-4d",i*j==i*j);
 
 }
return 0;
 } 
