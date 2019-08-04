#include <stdio.h>

int main() {
	
	int n;
	scanf("%d",&n);
	int arr[n];
	int n1=0;
	int n2=0;
	int i;
	for(i=0;i<n;i++)
	{
	    scanf("%d",&arr[i]);
	}
	int xy=0;
	for(i=0;i<n;i++)
	{
	      xy=xy^arr[i];
	}
	int c=0;
	int num;
	num=xy;
	while(((num>>c) & 1) == 0)
	{
	    c+=1;
	}
	num=(1<<c);
	xy=num;
	for(i=0;i<n;i++)
	{
	    if(arr[i] & xy)
	    {
	        n1=n1^arr[i];
	    }
	    else
	    {
	        n2=n2^arr[i];
	    }
	}
	
	printf("%d and %d",n1,n2);
	
	return 0;
}