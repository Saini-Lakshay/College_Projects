#include<iostream>

int main()
{
	int n;
	printf("Enter number : ");
	scanf("%d",&n);
	
	int l,r,mid;
	l=0;
	r=n;
	mid=(l+r)/2;
	int i=0;
	
	while(i==0 && l<r)
	{
		if((mid*mid) == n)
		{
			printf("%d is the square root of %d.",mid,n);
			i=1;
		}
		else if((mid*mid)>n)
		{
			r=mid;
			mid=(r+l)/2;
		}
		else 
		{
			l=mid;
			mid=(r+l)/2;
		}
	}
	
	return 0;
}
