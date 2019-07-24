#include<iostream>

int main()
{
	
	int n;
	printf("Enter number of elements in array : ");
	scanf("%d",&n);
	
	int arr[n];
	
	printf("Enter elements of array :\n");
	int i;
	for(i=0;i<n;i++)
	{
	  scanf("%d",&arr[i]);	
	}
	int j=2;
	for(i=2;i<n;i++)
	{
		if(arr[i]!=arr[i-1])
		{
			arr[j]=arr[i];
			j++;
		}
		else if(arr[i]!=arr[i-2] && arr[i]==arr[i-1])
		{
			arr[j]=arr[i];
			j++;
		}
		else if(arr[i]!=arr[i-3])
		{
			j=i;
		}
	}
	
	for(i=0;i<j;i++)
	{
		printf("%d ",arr[i]);
	}
	
	
	
	return 0;
}
