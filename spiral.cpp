#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int rows,cols;
	printf("Enter number of rows");
	scanf("%d",&rows);
	printf("Enter number of columns");
	scanf("%d",&cols);
	
	int arr[rows][cols];
	int i,j;
	int top,left;
	top=left=0;
	int right,bottom;
	right=cols-1;
	bottom=rows-1;
	int d=0;
	int n=0;
	
	
	while(top<=bottom && left<=right &&n<rows*cols)
	{n+=1;       
	  if(d==0)
	  {
	  	for(i=left;i<=right;i++)
	  	{
	  	  scanf("%d",&arr[top][i]);
		}
		top=top+1;
	  }
	  if(d==1)
	  {
	  	for(i=top;i<=bottom;i++)
	  	{
	  	 scanf("%d",&arr[i][right]);	
		}
		right=right-1;
	  }
	  if(d==2)
	  {
	  	for(i=right;i>=left;i--)
	  	{
	  	  scanf("%d",&arr[bottom][i]);	
		}
		bottom=bottom-1;
	  }
	  if(d==3)
	  {
	  	for(i=bottom;i>=top;i--)
	  	{
	  		scanf("%d",&arr[i][left]);
		}
		left=left+1;
	  }
	  d=(d+1)%4;
	}
	
	
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			printf("%d ",
			arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
