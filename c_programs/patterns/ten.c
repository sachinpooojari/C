#include<stdio.h>
void main()
{
	int i,j,k,n;
	char ch='A';
	scanf("%d",&n);
	int c=0;

	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{	if(i%2==0)
			{
				printf("%c ",ch);
				ch++;
			}
			else
			{

				c++;
				printf("%d ",c);
			}
		}printf("\n");
	}
}
