#include<stdio.h>
void primedec(int m);
int main ()
{int m,s;
scanf("%d",&m);
primedec(m);
 return 0; 
 } 
 void primedec(int m)
 {int i;
 for(i=2;i<=m;i++)
 	{while(m%i==0)
	 	{printf("%d",i);
		 m=m/i;
		  } 
		  
	 }
	 
 }
