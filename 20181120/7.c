#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void Merge(int arr[],int left,int right)
{
   int i=left,j,k=left,mid;
   int temp[sizeof(arr)/sizeof(int)];
   mid=(left+right)/2;
   j=mid+1;
   while(i!=(mid+1)&&j!=(right+1))
   {
	   if(arr[i]<arr[j])
		   temp[k++]=arr[i++];
	   else
		   temp[k++]=arr[j++];
   }
   if(i<mid+1)
	   temp[k++]=arr[i++];
   if(j<right+1)
	   temp[k++]=arr[j++];
   for(i=left;i<=right;i++)
   {
	   arr[i]=temp[i];
   }
}
void MergeSort(int arr[], int left, int right)
{
   int mid=left+(right-left)/2;
   if(left<right)
   {
	   MergeSort(arr,left,mid);
       MergeSort(arr,mid+1,right);
	   Merge(arr,left,right);
   }
}
int main()
{
	int arr[10],i,left,right;
    scanf("%d %d",&left,&right);
	srand(time(0));
	for(i=0;i<10;i++)
	{
		arr[i]=rand()%10;
	}
	MergeSort(arr,left,right);
	for(i=left;i<right;i++)
	printf("%d ",arr[i]);
	printf("\n");
	return 0;
}
