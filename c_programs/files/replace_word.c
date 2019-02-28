#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
FILE *fp,*dp;
char s1[30],s2[30],tmp[30];
	fp=fopen("data","r+");
	if(!fp) return;
	dp=fopen("temp","w+");
	puts("Enter the word to replace and to be replaced with ");
	scanf("%s%s",s1,s2);
	int n1=strlen(s1);
	int n2=strlen(s2);
			char ch;	
	fpos_t pos; //position variable of fos_t object
	while(fscanf(fp,"%s",tmp)!=EOF)
	{	if(strcmp(tmp,s1)==0)
		{
			fseek(fp,-n1,SEEK_CUR);
			fgetpos(fp,&pos);
			fseek(fp,n1,SEEK_CUR);
			while((ch=fgetc(fp))!=EOF)
			{	fputc(ch,dp);
			}
		//	return;	
		
		}
	}
	fsetpos(fp,&pos);
	fputs(s2,fp);
	rewind(dp);
	while((ch=fgetc(dp))!=EOF)
	{	fputc(ch,fp);
	}
	
	


}
