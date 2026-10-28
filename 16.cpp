#include<stdio.h>
int main () 
{int h,m,s;
scanf("%d:%02d:%02d",&h,&m,&s);
if(h>12)
	{printf("%d:%02d:%02d",h-12,m,s);
	}else 
	{if(h==12)
	{printf("0:%02d:%02d",m,s);
		}
		else printf("%d:%02d:%02d",h,m,s);	} 
return 0;	}
	

