#ifndef HEADDER_H
#define HEADDER_H
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct student 
{
	char* name;
	int rollno;
	float percentage;
	struct student *next;
}Node;
#endif





