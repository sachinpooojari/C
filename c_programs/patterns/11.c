//7 th from assignment 
#include<stdio.h>
void main()
{
	int i,j,k,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{ int c1=1,c2=2;
		for(j=1;j<=i;j++)
		{	
			if(i%2!=0)
			{	
				printf("%d ",c1);
				c1=c1+2;

			}
			else
			{
				printf("%d ",c2);
				c2=c2+2;
			}
		
		}
		printf("\n");

	}
}
