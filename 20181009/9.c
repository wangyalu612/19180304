#include <stdio.h>
int main()
{
  int n, i, ans;

  scanf("%d", &n);
    ans = 1;
  for(i=1; i<=n; i++)
  {

   ans = ans * i;

   while(ans % 10 == 0)
   ans = ans / 10;

    ans = ans % 10;

   }
   printf("%d\n", ans);
   return 0;
} 
