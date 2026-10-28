#include <stdio.h>
int main ()
{int a,b,i,t;
scanf("%d %d",&a,&b);
for(i=a;i<=b;i++)
	{if(i<10)
	{t=(i*i)%10;
	if(i==t)
	printf("%d\n",i);
	}else if(i<100)
	{t=(i*i)%100;
	if(i==t)
	printf("%d\n",i);
	}else if(i<1000)
	{t=(i*i)%1000;
	if(i==t)
	printf("%d\n",i);
	 } 
	
	}
	return 0;
 } 
