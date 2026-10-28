#include <stdio.h>
int main()
{int N,i,j;
char str[300001];
int countA;
scanf("%d",&N);
for(i=1;i<=N;i++)
	{int countA=0;
	scanf("%s",str);
	}
for(j=1;j<=N;j++)
	{if(str[j]=='0')
		{countA+=1;
		}
	}
	printf("%d",countA);
	return 0;
}
