#include<stdio.h>
void main()
{
	int i,j,k,l,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{

		for(j=-(n-1);j<=n-1;j++)
		{	if(j==0)
				continue;
				k=j;
			if(k<0)
				k=-k;
			if(n-k<i)
			printf("%d",n-k);
			else 
				printf(" ");
		}

	printf("\n");

	}
}
