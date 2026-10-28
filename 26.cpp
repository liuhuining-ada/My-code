#include <stdio.h>
int fun(int n,int x)
{

	if(x%n==0)
	{return 1;
	}else return 0;
	
}
int main ()
{int n;
int x;
int sum=0;
scanf("%d",&n);
while(1)
	{scanf("%d",&x);
	if(x==0)
	break ;
if(fun(n,x)==1)//±»nÕû³ı
sum+=x; }
printf("%d\n",sum);
return 0;
 } 
