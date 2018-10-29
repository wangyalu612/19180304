#include<stdio.h>
void main()

{
int N,X=1,Y=1,flag=0;
scanf("%d",&N);

if(N>=10000)
printf("输入的值与要求不符");
while(X<=100)

{
Y=X;
while (Y<=100)
{

 if (X*X+Y*Y==N)
 {
 printf("%d %d\n",X,Y);
  flag++;
}  
Y++;
}
X++;
}
if (flag==0)
  printf("No solution\n");
 }

 
