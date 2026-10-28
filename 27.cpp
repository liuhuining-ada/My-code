/*#include<stdio.h>
double fun(int n);
int main ()
{int n;
double s;
scanf("%d",&n);
s=fun(n);//·µ»ØµÄÖµ 
printf("%.2lf",s);
return 0;
 } 
 double fun(int n)
 {int fm=0;
 double s=0.0;
 int i;
 for(i=1;i<=n;i++)
 	{fm+=i;
 	s+=1.0/fm;
	 }return s;
  } */
#include<stdio.h>
int isshui(int n);
int main ()
{int a,b;
int i;
scanf("%d%d",&a,&b);
for(i=a;i<=b;i++)
	{if(isshui(i)==1)
	printf("%d ",i);
		}
		return 0;
}
int isshui(int i)
{int b=i/100;
int s=i/10%10;
int g=i%10;
return (b*b*b+s*s*s+g*g*g==i);
}

