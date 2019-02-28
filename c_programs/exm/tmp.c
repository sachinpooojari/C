
#include<stdio.h>
///static int i=8;
void call1(void );
extern int i;
void call(void )
{
	printf("%d %d",i,sizeof i);
}
void main()
{
call();
call1();
call();
call1();
}
