#include<stdio.h>
#include<conio.h>
int main()
{
	char job[10][10];
	int time[10],avail,tem[10],temp[10];
	int safe[10];
	int ind=1,i,j,q,n,t;
	printf("enter no. of jobs");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter name and time:");
		scanf("%s%d",&job[i],&time[i]);
	}
	printf("enter the available resourses:");
	scanf("%d",&avail);
	for(i=0;i<n;i++)
	{
		temp[i]=time[i];
		tem[i]=i;
	}
	for(i=0;i<n;i++)
	for(j=i+1;j<n;j++)
	{
		if(temp[i]>temp[j])
		{
			t=temp[i];
			temp[i]=temp[j];
			temp[j]=t;
			t=tem[i];
			tem[i]=tem[j];
			tem[j]=t;
		}
	}
	for(i=0;i<n;i++)
	{
		q=tem[i];
		if(time[q]<=avail)
		{
			safe[ind]=tem[i];
			avail=avail-tem[q];
			printf("%s",job[safe[ind]]);
			ind++;
		}
		else
		{
			printf("no safe sequence");
		}
	}
	printf("safe sequence is:");
	for(i=1;i<ind;i++)
	printf("%s %d\n",job[safe[i]],time[safe[i]]);
	getch();
	}
