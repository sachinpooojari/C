#include"header.h"
void delete_rollno(Node **hptr,int number)
{
	Node *tmp;
	Node *temp=*hptr;
	if((*hptr)->rollno==number)
	{	
		*hptr=(*hptr)->next;
		free(temp);
		return;
	}
	else
	{
		while(temp->next)
		{	if(number==temp->next->rollno)
			{	
				Node *temp1=temp->next;
				temp->next=temp->next->next;
				free(temp1);
				return;
			}
			else
				temp=temp->next;
		}
	}
	
	printf("\nNot found\n");
}


int find_duplicate(Node *hptr,const char* name )
{
	int temp_roll;
	puts("in dup");
	int count=0;
	while(hptr)
	{
		if(strcmp(hptr->name,name)==0)
		{	
			count++;
			if(count==1)
			{
				temp_roll=hptr->rollno;	
			}
			else if( count>1 )
				printf("name Duplicate found with id: %d\n",hptr->rollno);
		}
		hptr=hptr->next;

	}
	if(count==0 || count==1)  //return if not present or present only once 
			return 0;	
	printf("name Duplicate found with id: %d\n",temp_roll);
	int number;
	scanf("%d",&number);
	return number;
}

void delete_name(Node **hptr,const char* name)
{
	Node *tmp;
	Node *temp=*hptr;
	int num;
	if(num=find_duplicate(*hptr,name))
	{
		delete_rollno(hptr,num);
		return;
	
	}
	if(strcmp((*hptr)->name,name)==0)
	{	
		*hptr=(*hptr)->next;
		free(temp);
		return;
	}
	else
	{
		while(temp->next)
		{	if(strcmp(temp->next->name,name)==0)
			{	
				Node *temp1=temp->next;
				temp->next=temp->next->next;
				free(temp1);
				return;
			}
			else
				temp=temp->next;
		}
	}
	
	printf("\nNot found\n");



}
