/*指针函数 递归 结束用两个函数表示*/
#include<stdio.h>
typedef int (*fun)(int n);
int end(int n)
	{
		return 0;
	}
int addn(int n)
	{
		fun f[2]={end,addn};
		return f[!!n](n-1)+n;/*两次*/
	}
int main()
{
	int n,x;
	scanf("%d",&n);
    x=addn(n);
	printf("%d",x);
}
