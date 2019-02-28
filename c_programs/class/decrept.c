#include<stdio.h>

#include<string.h>
void space_rmv(char*);
void swap(char *);
void main()
{
	
	char s[40],t[40];
	gets(s);
	strcpy(t,s);
	space_rmv(t);
//	puts(t);
	swap(t);
//	puts(t);
	int i,n1,n2,k;
	n1=strlen(s);
	n2=strlen(t);
	char t1[40];
	for(i=0;i<n1+1;i++)
	{
		if(s[i]==' ')
		{	strcpy(t+i,t+i-1);
			t[i]=' ';

//			puts(t);
		}
		
	
	}		
	puts(t);


}

void space_rmv(char *s)
{
 	int i,j;
	for(i=0;s[i];i++)
	{
		for(j=i;s[j];j++)	
		{
			if(s[i]==' ' && s[i-1]!=' ')
			{
				strcpy(s+i,s+i+1);
			
			}
		
		
		
		}
	}


}

void swap(char *s)
{	int i,n;
	for(n=0;s[n];n++);
// to eliminate null
	for(i=0;i<n;i++)
		{
		//	printf("%d",i+1);
			if((i+1)%4==0 && s[i+1]!=0 )
			{
				char tmp;
				tmp=s[i];
				s[i]=s[i+1];
				s[i+1]=tmp;
			
			}
				
		
		}

}

