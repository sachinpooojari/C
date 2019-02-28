#include<stdio.h>
void main()
{
	int  i,j,k,l,n;
	scanf("%d",&n);
	for(i=-(n-1);i<=(n-1);i++)
	{
		k=i;
		if(k<0)
			k=-k;
		for(j=-(n-1);j<=n-1;j++)
		{
			l=j;

			if(l<0)
				l=-l;
	//	printf("%d",l);
			if(l>=n-k-1)
			printf("* ");
			else if(l<n-k)
				printf("  ");
		}

		printf("\n",i);
	}
}

