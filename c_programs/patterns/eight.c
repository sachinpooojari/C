#include<stdio.h>
void  main()
{
	int i,j,k,l,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{	l=1;
		for(j=1,l=2*i-1;j<=i;j++)
		{  
			printf("%d ",l);
				l*=l;
		}
		printf("\n");
	}
}
