#include<stdio.h>
void main()
{
	int i,j,k,n;
	char ch;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{ ch='A';
		for(j=-(n-1);j<=(n-1);j++)
		{  
			k=j;
			if(k<0)
				k=-k;
			
			if(n+1-i>=n-k)	
				printf("%c",ch+(n-k-1));
			else
				printf(" ");
		}
		printf("\n");
	}
}

