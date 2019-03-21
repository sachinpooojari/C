#include"header.h"
void main(int argc,char** argv)
{
	if(argc<2)
	{
		puts("./a.out ");
		return;
	}
	Node *hptr=0;
	stud_add(&hptr);
	stud_add(&hptr);
	stud_add(&hptr);
	stud_add(&hptr);
	stud_add(&hptr);
//	delete_rollno(&hptr,atoi(argv[1]));
	delete_name(&hptr,argv[1]);
	read(hptr);



}
