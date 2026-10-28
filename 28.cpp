#include <stdio.h>
int fun (int y,int m,int d);
int main ()
{int y,m,d;
int t;
scanf("%d%d%d",&y,&m,&d);
t=fun(y,m,d);
printf("%d",t);
return 0;
 } 
 int fun (int y,int m,int d)
 {int day[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
 if((y%400==0)||(y%4==0&&y%100!=0))
 day[2]=29;
 int total=0;
 int i;
 for (i=1;i<m;i++)
 	{total+=day[i];
	 }
	 total+=d;
	 return total;
 }
