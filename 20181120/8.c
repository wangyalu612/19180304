#include <stdio.h>
#include <stdlib.h> 
int compare_ints(const void* a, const void* b)
{
    int arg1 = *(const int*)a;
    int arg2 = *(const int*)b;
    if (arg1 < arg2) return -1;
    if (arg1 > arg2) return 1;
    return 0;
}
 
int main()
{
    int a[] = { -2, 99, 0, -743, 2,4 };
    int length = sizeof(a)/ sizeof(int);
    qsort(a,length, sizeof(int), compare_ints);
 
    for (int i = 0; i <length; i++) 
	{
        printf("%d ", a[i]);
    }
    printf("\n");
	return 0;
}
