#include<stdio.h>

void bubble(int arr[],int n)
{

int temp,i,j;
for(i=0;i<n;i++)
	{
	for(j=0;j<n-i-1;j++)
		{
		if(arr[j]>arr[j+1])
			{
			temp=arr[j];	
			arr[j]=arr[j+1];
			arr[j+1]=temp;
			}

		}

	}
printf("\nSORTED ARRAY:\n");
for(i=0;i<n;i++)
{
printf("\n");
printf("%d",arr[i]);
}
}

void printMax(int arr[],int n,int k)
{
int i;
printf("\nmaximum elements are:\n");
for(i=n-1;i>=n-k;i--)
{
printf("%d",arr[i]);
printf("\n");
}
}

int main()
{
int n,k,i;
int arr[10];
printf("\nenter the number of elements to be inserted:\n");
scanf("%d",&n);
printf("\nEnter the element in the array:\n");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("\nenter the maximum elements:\n");
scanf("%d",&k);
bubble(arr,n);
printMax(arr,n,k);

return 0;
}
