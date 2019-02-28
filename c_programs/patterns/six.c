#include<stdio.h>
void main()
{
	int i,j,k,l,n;
	scanf("%d",&n);
	for(i=-(n-1);i<=n-1;i++)
	{	k=i;
		if(k<0)
			k=-k;

		for(j=-(n-1);j<=n-1;j++)
		{ 	l=j;
			if(l<0)
				l=-l;
//			int m;
			if(l>=k)
			printf("%d ",2*(n-k)-1);
			else
			printf("  ");
		}
		printf("\n");
	}
}
