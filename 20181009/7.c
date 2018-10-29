#include<stdio.h>

int mod2(int a,int b,int mod)

{

    int c = 1;

    a = a % mod;

    while(b>0)

    {

        if(b % 2 == 1)

           c = (c * a) % mod;

        b = b/2;

        a = (a * a) % mod;

    }

    return b;

}

int main()

{

	int c=1,a,b,mod;

	scanf("%d %d %d",&a,&b,&mod);

	c=mod2(a,b,mod);

	printf("d=%d",c);

	return 0;

}
