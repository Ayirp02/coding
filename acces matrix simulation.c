#include<stdio.h>
#include<string.h>
#include<conio.h>
#define MAX_SUBJECTS 3
#define MAX_OBJECTS 3
enum AccessRight{NO_Access,READ,WRITE,EXECUTE};
const char *access_rights[]={"N0_ACCESS","READ","WRITE","EXECUTE"};
int access_matrix[MAX_SUBJECTS][MAX_OBJECTS]={
{READ,NO_Access,EXECUTE},
{WRITE,READ,NO_Access},
{EXECUTE,WRITE,READ}};
int main()
{
	int subject=1;
	int object=2;
	printf("subject %d has %S access to object %d\n",subject,access_rights[access_matrix[subject][object]],object);
	return 0;
	getch 0;
	
}
