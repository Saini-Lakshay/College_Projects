#include <stdio.h>

int main(void) {
	
	char *s = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz+/0123456789";
	char *str = "pqrst";
	int l=5;
	int j=0;
	int t;
	int n;
	int n1;

	if(l%3 == 0)
	{
		while(str[j]!='\0')
		{
		  if(j%3==0)
		  {
		  	t=2;
		  	n=(int)str[j];
		  	printf("%c ",s[n>>t]);
		  }
		  else if(j%3==1)
		  {
		      t=4;
		      n=(int)str[j];
		      n1=(int)str[j-1];
		      printf("%c ",(s[((n>>t)|(n1<<t))&63]));
		      n1=(int)str[j+1];
		      printf("%c ",(s[((n<<2)|(n1>>6))&63]));
		  }
		  else if(j%3==2)
		  {
		      n=(int)str[j];
		      printf("%c ",s[(n&63)]);
		  }
		  j++;
	    }
	}
	else if(l%3==1)
	{
	   	while(str[j]!='\0')
		{
		  if(j%3==0)
		  {
		  	t=2;
		  	n=(int)str[j];
		  	printf("%c ",s[n>>t]);
		  }
		  else if(j%3==1)
		  {
		      t=4;
		      n=(int)str[j];
		      n1=(int)str[j-1];
		      printf("%c ",(s[((n>>t)|(n1<<t))&63]));
		      n1=(int)str[j+1];
		      printf("%c ",(s[((n<<2)|(n1>>6))&63]));
		  }
		  else if(j%3==2)
		  {
		      n=(int)str[j];
		      printf("%c ",s[(n&63)]);
		  }
		  if(str[j+1]=='\0')
		  {
		      n=(int)str[j];
		      printf("%c ",s[(n<<4)&63]);
		  }
		  j++;
	    }
	    printf(" = = ");
	}
	else if(l%3==2)
	{
	  	   	while(str[j]!='\0')
		{
		  if(j%3==0)
		  {
		  	t=2;
		  	n=(int)str[j];
		  	printf("%c ",s[n>>t]);
		  }
		  else if(j%3==1)
		  {
		      t=4;
		      n=(int)str[j];
		      n1=(int)str[j-1];
		      printf("%c ",(s[((n>>t)|(n1<<t))&63]));
		      n1=(int)str[j+1];
		      printf("%c ",(s[((n<<2)|(n1>>6))&63]));
		  }
		  else if(j%3==2)
		  {
		      n=(int)str[j];
		      printf("%c ",s[(n&63)]);
		  }
		  j++;
	    }
	    printf("= ");
	}
	
	return 0;
}

