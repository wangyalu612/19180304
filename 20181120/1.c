#include<stdio.h>
int f(int x)
{
	if(x%2==1)
		return x;
	if(x%2==0)
		return f(x/2);
}
int main()
{
	int N=0,i,k=0;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
	{
		printf("%d\n",f(i));
		k+=f(i);
	}
	printf("%d\n",k);
}
