#include<iostream>

int main()
{
	int n;
	printf("Enter size of array : ");
	scanf("%d",&n);
	
	int arr1[n];
	int arr2[n];
	
	printf("Enter first array : \n");
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr1[i]);
	}
    
    printf("Enter second array : \n");
    
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr2[i]);
	}
	
	int min=0;
	int max=0;
	min=arr1[0];
	max=arr2[0];
    
    for(i=0;i<n;i++)
    {
    	if(arr1[i]<min)
    	{
    		min=arr1[i];
		}
		if(arr2[i]>max)
		{
			max=arr2[i];
		}
	}
	int ans[(max+2)];
	
	for(i=0;i<=max+1;i++)
	{
		ans[i]=0;
	}
	
	for(i=0;i<n;i++)
	{
		ans[arr1[i]]+=1;
		ans[arr2[i]+1]-=1;
	}
	min=-1;
	int sum=0;
	int res=ans[0];
	for(i=0;i<=max+1;i++)
	{
		sum=sum+ans[i];
		if(sum>res)
		{
		res=i;
		}
	}
	
	printf("Maximum is %d",res);
	
	
    
    
	return 0;
}
