/*一般法 
#include<stdio.h>
int main ()
{int n,i;
scanf("%d",&n);
int sum=0;
for(i=1;i<=n;i++)
{if(i%10==6||i/10%10==6||i/100==6)
	{sum+=i;
	}
}printf("sum=%d\n",sum);
return 0;
}*/

/*自定义函数 
#include <stdio.h>
int hasSix(int x)
{if(x%10==6)return 1;
if(x/10%10==6)return 1;
if(x/100==6)return 1;
return 0;
}
int main ()
{int n,i;
scanf("%d",&n);
int sum=0;
for(i=1;i<=n;i++)
	{if(hasSix(i)==1)
	sum+=i;
	}printf("sum=%d\n",sum);
return 0;
}*/
//转换为字符串 （把数字转换为字符串，找‘6’字符） 

