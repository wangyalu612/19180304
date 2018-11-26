#include<stdio.h>
#include<string.h>
int substr(const char *str,const char *substr)
{
   int i,j,flag=1,m=strlen(str),n=strlen(substr);
   for(i=0;i<=(m-n);i++)
   {
	   flag=1;
	   for(j=i;j<n-i;j++)
	   {
		   if(str[j]!=substr[j])
		   {
			   flag=0;
			   break;
		   }
	   }
	   if(flag==1)
		   return i;
   }
   return -1;
}
int main()
{
	int x;
	char str[1000];
	char a[1000];
	gets(str);
	gets(a);
	x=substr(str,a);
	printf("%d",x);
	return 0;
}
