#include<stdio.h>

int main()
{
	int n;
	printf("Enter number of elements in array : ");
	scanf("%d",&n);
	
	int k;
	printf("Enter difference : ");
	scanf("%d",&k);
	
	int arr[n];
	int i;
	
	printf("Enter elements of array : \n");
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	int j=0;
	for(i=0;i<n;i++)
	{
		j=0;
		while(j<n)
		{
			if((arr[i]+k)==arr[j])
			{
				printf("%d - %d = %d",arr[j],arr[i],k);
				i=n;
				break;
			}
			j++;
		}
	}
	
	
	
	return 0;
}
