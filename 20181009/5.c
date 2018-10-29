#include<stdio.h>
int main()

{
int letter=0,other=0;
char c;
printf("请输入： \n");


scanf("%c",&c);
do
{
if(c>='a'&&c<='z'||c>='A'&&c<='Z')
letter++;
else
other++;
}
while(c!='.'&&c!=32);
printf (" %d ",letter);
return 0;
}
