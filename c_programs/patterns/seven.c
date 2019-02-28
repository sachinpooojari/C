#include<stdio.h>
void main()
{
	int i,j,k,n,l;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1,k=i;j<2*i;j++,k--)
		{	if(k<=0)
				l=(-k)+2;
			else 
				l=k;
			printf("%d",l);
		}
		printf("\n");
	}
}
