#include"header.h"
Node*  create_record()
{
	Node *student;
	student=(Node*) malloc(sizeof(Node));
	student->name=(char*) malloc(sizeof(10));
	printf("Enter name | age | percentage\n");
	scanf("%s",student->name);
	scanf("%d",&student->rollno);
	scanf("%f",&student->percentage);
	return student;
}
void stud_add(Node **hptr)
{

	Node *std;
	std=create_record();
	Node *temp;
	temp=*hptr;
	if(*hptr==0 || (temp->rollno > std->rollno)  )	
	{
		std->next=*hptr;
		*hptr=std;	
		return;
	}
	else
	{

		while(temp->next)
		{
			if(std->rollno  < temp->next->rollno)
			{
				std->next=temp->next;
				temp->next=std;
				//*hptr=std;	
				return;
			}
			else
				temp=temp->next;
		}
				std->next=temp->next;
				temp->next=std;
				return;
	
	}
	

}

void read(Node *hptr)
{	
	while(hptr)
	{
		printf("Name=%s \nrollno=%d\npercentage=%f \n",hptr->name,hptr->rollno,hptr->percentage);
		hptr=hptr->next;
	}

}
