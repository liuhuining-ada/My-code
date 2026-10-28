#include <stdio.h>
int main ()
{int a,n,i,x;
scanf("%d %d",&a,&n);
int Sn=a;
int y=a;
for(i=1;i<=n-1;i++)
	{a=a*10+y;
	Sn+=a;
	}printf("Sn=%d",Sn);
 return 0;
}
