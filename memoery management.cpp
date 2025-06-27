#include<stdio.h>
#include<conio.h>
main()
{
	int ms,bs,nob,ef,n,
	mp[10],tif=0;
	int i,p=0;
	printf("enter the total memory available(in bytes)---");
	scanf("%d",&ms);
	printf("enter the block size(in bytes)--");
	scanf("%d",&bs);
	nob=ms/bs;
	ef=ms-nob*bs;
	printf("\n enter thr no. of processes--");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter memory required for process %d(in bytes)--",i+1);
		scanf("%d",&mp[i]);
	}
	printf("\n no. of blocks available in memory--%d",nob);
	printf("\n\n PROCESS \tMEMORY REQUIRED\tALLOCATED\tINTERNAL FRAGMENTATION");
	for(i=0;i<n&&p<nob;i++)
	{
		printf("\n %d\t\t %d",i+1,mp[i]);
		if(mp[i]>bs)
		printf("\t\t NO \t\t---");
		else
		{
			printf("\t\t YES\t%d",bs-mp[i]);
		    tif=tif+bs-mp[i];
		    p++;
	   }
    }
if(i<n)
printf("\n memory is full,remaining process cannot be accomodated");
printf("\n\n total internal fragmentation is %d",tif);
printf("\n total external fragmentation is %d",ef);
getch();
}
