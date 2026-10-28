#include <stdio.h>
int main ()
{int m,n;
float p,P;
scanf("%d",&m);
scanf("%d",&n);
scanf("%d",&p);
if(m==1||m>=7&&m<=9)
{if(n>=20)
	{P=n*p*0.95;
	printf("5%,%.2f,%.2f",n*p*0.05,P);
	}else {P=n*p;
	printf("0,0,%.2f",P);
	}
}else if(m>=2&&m<=6||m>=10&&m<=12)
{if(n>=20)
	{P=n*p*0.8;
	printf("20%,%.2f,%.2f",n*p*0.2,P);
	}
	if(n<20)
	{P=n*p*0.9;
	printf("10%,%.2f,%.2f",n*p*0.1,P);
	}
}
if (m<1||m>12)
	{printf("month error");
	}
return 0;
}
