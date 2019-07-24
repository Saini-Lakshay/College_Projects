#include<iostream>

int main()
{
	
	int n;
	printf("Enter number of elements in array : ");
	scanf("%d",&n);
	int i=0;
	int arr[n];
	int max=0;
	int sum=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		
		if(arr[i]>max)
		{
			max=arr[i]; 
		}
		
		if((sum+arr[i])>=0)
		{
			sum=sum+arr[i];
		}
	}
	printf("Sum is %d and max is %d\n",sum,max);
	if(max>sum)
	{
	printf("%d",max);
    }
    else
    {
    	printf("%d",sum);
	}
	
	
	return 0;
}
