#include<stdio.h>
#include<string.h>
void cat(char *s1,char *s2)
{	int i;
	for(i=0;s1[i];i++);
	if(*s2)
	{
		s1[i]=*s2;
		s1[i+1]=0;
		cat(s1,s2+1);
	}
}
int cmp(char *s1,char *s2)
{	
	if(*s1==*s2 && *s1!=0 && *s2!=0)
		cmp(s1+1,s2+1);
	else
	{
		if(*s1==*s2)
			return 0;
		else if(*s1>*s2)
			return 1;
		else 
			return -1;
	}



}

void cpy(char *s1,char *s2)
{
	if(*s2)
	{	*s1=*s2;
		cpy(s1+1,s2+1);
	}
	else
	{
		*s1=*s2=0;
	}
}
int len(char *s1)
{

	if(*s1)
		return 1+len(s1+1);
	
	else
		return 0;
	
}
void rev(char *s)
{
///this logic is when we allowed to use another variable 
/*	static char s1[20];
	static int i=0;
	if(*s)
	{	
		rev(s+1);
		s1[i++]=*s;
	//	printf("%c ",*s);
	}
	s1[i]=0;
	puts(s1);
*/	
	static int flag=0;
	static int i=0;
	if(!flag)
		{
			for(i=0;s[i];i++);// to get str lenth-1
			i=i-1;
			flag++;
		}

	static int j=0;
	if(j<i)
	{
		printf("<%c %c> ",s[j],s[i]);
		char tmp;
		tmp=s[j];
		s[j]=s[i];
		s[i]=tmp;

		j++;
	       	i--;
		rev(s);
	
	}	
	return;
	
}
//without recursion --net  method 
char * str(char *s1,char *s2)
{
	while(*s1)
	{
		char *st1=s1;
		char *st2=s2;
		while(*st1 && *st2 && *st1==*st2)
		{
			st1++;
			st2++;
		}
		if(!*st2)
		{	return s1;
		}
	s1++;	
	}

		


}

char* str_rec(char *s1,char *s2)
{
	int n1;
	n1=strlen(s2);
	if(strncmp(s1,s2,n1)==0)
		return  s1;
	else 
		str_rec(s1+1,s2);



}


void main()
{

	char s1[20],s2[20];

	gets(s1);
	gets(s2);
//	cat(s1,s2);
//	printf("%d\n",cmp(s1,s2));
//	cpy(s1,s2);
//	printf("%d\n",len(s1));
//	rev(s1);
//	puts(s1);
//	puts(s2);
//

	puts(str(s1,s2));
	puts(str_rec(s1,s2));

}
