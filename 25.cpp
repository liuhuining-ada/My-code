#include<stdio.h>
int main()
{int n;
if(scanf("%d",&n)!=1)return 0;
double sum=0.0;
for(int i=1;i<=n;i++)
	{sum+=1.0/(4*i-3)-1.0/(4*i-1);
	 } 
	 double pi=sum*4.0;
	 printf ("%.2f\n",pi);
	 return 0;
	 
}
