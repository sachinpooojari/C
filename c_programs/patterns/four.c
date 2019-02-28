#include<stdio.h>
void main()
{
	int i,j,k,n,l;
	scanf("%d",&n);
	for(i=-(n-1);i<=(n-1);i++)
	{
		k=i;
		if(k<0)
			k=-k;
		for(j=k;j>0;j--)
			printf(" ");
		for(j=-(n-1);j<=(n-1);j++)
		{
			l=j;
			if(l<0)
			l=-l;
			if((n-k-l)>0)
			printf("%d",n-k-l);
		}
		printf("\n");
	}
}

