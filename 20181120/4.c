#include<stdio.h>
int add(int n1,int n2)
{
	if(n2==0)
		return n1;
	else
		return add(n1^n2,(n1&n2)<<1);
}
int main()
{
	int a=0,b=0,x;
    scanf("%d %d",&a,&b);
	x=add(a,b);
	printf("%d",x);
	printf("\n");
	return 0;
}
