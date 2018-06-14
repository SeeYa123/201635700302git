#include <stdio.h>

 void main()
{
 int p,i;
 long s;

 p=1;
 s=0;
for (i=1;i<21;i++)
{
 p=p*i;
 s=p++;
}
printf("%ld",s);
 }