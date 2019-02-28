#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
FILE *fp,*dp;
	char ch,f_name[10];
	puts("file name?");
	scanf("%s",f_name);
	fp=fopen(f_name,"r");
	if(!fp) return;
	dp=fopen("temp","w");
	int c;
	for(c=1;(ch=fgetc(fp))!=EOF;c++);
	//printf("%d\n",c);	
	rewind(fp);
	char s[c+1];
	int i;
	for(c=0;(ch=fgetc(fp))!=EOF;c++)
		s[c]=ch;
	s[c]=0;
	puts(s);
	for(i=c-2;i>=0;i--)
		fputc(s[i],dp);

	
	remove(f_name);
	rename("temp",f_name);	


}
