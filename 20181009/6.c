#include<stdio.h>
int main()
{
	int x,y,z,D;

	scanf("%d%d%d",&x,&y,&z);
	 if(x==y)
       printf("%d\n",z);
	 else if(x!=y&&x!=z)
	   printf("%d\n",x);
	 else if(x!=y&&x==z)
	   printf("%d\n",y);

	 return 0;
}
