#include<stdio.h>
int countA=0;
int main ()
{int T,i,j;
char str[5];
scanf("%d",&T);
for(i=1;i<=T;i++)
	{scanf("%c",str[5]); 
	for(j=0;j<=3;j++)
	{if(str[j]==1)
	{countA+=1; 
	}
	}
		if(countA%2!=0)
	{printf("Yes\n");
	}else printf("No\n");
	}
	
	return 0;

}
