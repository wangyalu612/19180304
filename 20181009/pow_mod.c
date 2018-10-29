#include<stdio.h>
#include<math.h>
int main()
{
long a,b,c,i,j;

scanf("%ld %ld %ld",&a,&b,&c);
i=pow(a,b);
j=i%c;
printf("(a^b)%%c=%d\n",j);
return 0;
}
