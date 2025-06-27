#include<stdio.h>
#include<conio.h>
int main()
{
	int ms,ps,nop,np,rempages,i,j,x,y,pa,offset;
	int s[10],fno[10][20];
	printf("enter the memory size--");
	scanf("%d",&ms);
	printf("enter the page size---");
	scanf("%d",&ps);
	nop=ms/ps;
	printf("\n the no. of pages available in memory are-----%\n",nop);
	printf("enter the no. of processes----");
	scanf("%d",&s[i]);
	rempages=nop;
	for(i=1;i<np;i++)
	{
		printf("\n enter the no. of pages required for p[%d]----",i);
		scanf("%d",&s[i]);
		if(s[i]>rempages)
		{
			printf("\n memory is full\n");
			break;
		}
		rempages=rempages-s[i];
		printf("enter page table for p[%d]----",i);
		for(j=0;j<s[i];j++)
		scanf("%d",&fno[i][j]);
	}
	printf("\n enter logical address to find physical address\n");
	printf("enter process no. and page no. and offset----");
	scanf("%d%d%d",&x,&y,&offset);
	if(x>np||y>=s[x]||offset>=ps)
	printf("\n invalid process or page no.or offset\n");
	else
	{
		pa=fno[x][y]*ps+offset;
		printf("\n the physical address is---%d\n",pa);
		getch();
	}
}
