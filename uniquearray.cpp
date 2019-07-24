#include<iostream>

int main()
{
	
	int n;
	printf("Enter n : ");
	scanf("%d",&n);
	
	printf("Enter the array : \n");
	
	int arr[n];
	int i=0,j=1;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(i=1;i<n;i++)
	{
		if(arr[i]!=arr[i-1])
		{
			arr[j]=arr[i];
			j++;
		}
	}
	
	for(i=0;i<j;i++)
	{
		printf("%d ",arr[i]);
	}
	
	
	
	return 0;
}
