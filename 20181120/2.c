#include<stdio.h>
int bin_insert(int n, int m, int j, int i)
{
   int x;
   x=n<<(32-j);
   x=x>>(32-j);
   n=n>>j;
   n=(n|m);
   n=n<<j;
   n=(n|x);
   return n;
}
int main()
{
	int n=0,m=0,j=0,i=0,x;
	scanf("%d %d %d %d",&n,&m,&j,&i);
    x=bin_insert(n,m,j,i);
    printf("%d\n",x);
}
