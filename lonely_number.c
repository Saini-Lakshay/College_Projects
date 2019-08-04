#include <stdio.h>

int main() {
	
	int n;
	scanf("%d",&n);
	int arr[n+1];
	arr[0]=0;
	int i;
	for(i=1;i<=n;i++)
	{
	    scanf("%d",&arr[i]);
	}
	
	for(i=1;i<=n;i++)
	{
	    if(arr[i]<0)
	    arr[-1*arr[i]]=arr[-1*arr[i]]*(-1);
	    else
	    arr[arr[i]]=-1*arr[arr[i]];
	}
	
	for(i=1;i<=n;i++)
	{
	    if(arr[i]<0)
	    {
	        printf("%d ",i);
	    
	    }
	}
	return 0;
}