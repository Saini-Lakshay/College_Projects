#include<iostream>

struct trees
{
	int h;
	int rate;
};

int main()
{
	int n;
	printf("Enter number of trees : ");
	scanf("%d",&n);
	
	int wood;
	printf("Enter wood required : ");
	scanf("%d",&wood);
	
	int min_h;
	printf("Enter minimum height required : ");
	scanf("%d",&min_h);
	
	trees st[n];
	int i=0;
	for(i=0;i<n;i++)
	{
		printf("Enter height of tree : ");
		scanf("%d",&st[i].h);
		printf("Enter rate of growth : ");
		scanf("%d",&st[i].rate);
	}
	
    long long unsigned int l,r,mid,r1,l1,l2,r2;
	l=0;
	r=1000000000000000000;
	mid=(l+r)/2;
	long long unsigned int sum=0;
	
		for(i=0;i<n;i++)
	  	{
	  		if((st[i].h+(st[i].rate*mid))>=min_h){
	  	  sum=st[i].h+(st[i].rate*mid);	}
		}
	
	while(l<r)
	{
		sum=0;
		l2=l1;
		r2=r1;
		l1=l;
		r1=r;

        					for(i=0;i<n;i++)
	  	{
	  		if((st[i].h+(st[i].rate*mid))>=min_h){
	  	  sum+=st[i].h+(st[i].rate*mid);	}
		}
		
		
		if(sum>=wood)
		{
			r=mid;
			mid=(l+r)/2;
		}
		else if(sum<wood)
		{
			l=mid;
			mid=(l+r)/2;
		}
		
		if(r==r1 && l==l1)
		{
			break;
		}

	}

mid=(l+r)/2;
sum=0;
  		for(i=0;i<n;i++)
	  	{
	  		if((st[i].h+(st[i].rate*mid))>=min_h){
	  	  sum+=st[i].h+(st[i].rate*mid);	}
		}
		if(sum<wood)
		{
			mid=(l2+r2)/2;
		}

	
	printf("Number of months required are : %d",mid);
	
	
	
	return 0;
}
