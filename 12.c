#include<stdio.h>
#include<string.h>
#include<conio.h>
 int safeCopy(char *dest,size_t size,const char *src)
{
	if(strlen(src)<size)
	{
		strcpy(dest,src);
	}
	else
	{
		printf("potential buffer overflow detected.copy not performed.\n");
	}
}
int main()
{
	char buffer[10];
	safeCopy(buffer,sizeof(buffer),"safe");
	printf("Buffer content:%s\n",buffer);
	safeCopy(buffer,sizeof(buffer),"unsafe string that is too long");
	printf("BUffer content:%s\n",buffer);
	return 0;
}
