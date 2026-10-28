#include <stdio.h>
int main ()
{char s;
while (s=getchar()!='\n') 
{
if(s>='a'&&s <='z')
s=s-32;
if(s>='A'&&s<='Z')
s=s+32;

}putchar (s);
printf("\n");
 return 0;
 
 } 
