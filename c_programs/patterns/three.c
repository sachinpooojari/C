#include<stdio.h>
main()
{
	int i,j,k,num;
	scanf("%d",&num);
/*	for(i=-num;i<num;i++)
	{	k=i;
		if(k<0)
			k=-i;
		for(j=0;j<num;j++)
		{
			if(j<k)
			printf(" ");
			else
			printf("* ");
		}
			printf("\n");
	}*/

	for(i=-num;i<=num;i++)
	{ k=i;
		if(k<0)
			k=-k;
		
		{
			
			for(j=num;j>k;j--)
				printf(" ");
			for(j=1;j<=k;j++)
				printf("* ");
		}
		printf("\n");
	}
}
