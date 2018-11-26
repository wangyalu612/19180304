#include<stdio.h>
#include<string.h>
int count_substr(const char* str, const char* substr)
{
   int i=0,j,flag,m=strlen(str),n=strlen(substr),count=0;
   while(i<=(m-n))
   {
	   flag=1;
	   for(j=0;j<n;j++)
	   {
		   if(str[j+i]!=substr[j])
		   {
			   flag=0;
			   i++; 
			   break;
		   }
	   }
	   if(flag==1)
	   {
		   count++;
		   i+=n;
	   }
   }
   if(count!=0)
   {
	   return count;
   }
   if(count==0)
   {
	   return -1;
   }
}
int main()
{
	int x;
	char str[1000];
	char a[1000];
	gets(str);
	gets(a);
	x=count_substr(str,a);
	printf("%d",x);
	printf("\n");
	return 0;
}
