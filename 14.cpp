#include <stdio.h>
int main ()
{int a,i,b;
int started=0; 
int sum=0;
scanf("%d",&a);
char names[]={"万位","千位","百位","十位","个位"};
 int index =0;
for(i=10000;i>=1;i=i/10)
	{b=a/i;
	a=a%i;
	if(b!=0)
		{started=1;
		}
		if(started==1||i==1)
		{printf("%s:%d\n",names[index],b);
		}
		index++;
		
	}
	return 0; 
 } 
 
  
