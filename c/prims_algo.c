#include<stdio.h>
 
#include<conio.h>
 
int a,b,u,v,n,i,j,ne=1;
 
int vis[10]={0},min,mcost=0,cost[10][10];
 
int main()
 
{
 

 
	printf("\nEnter the number of nodes:");
 
	scanf("%d",&n);
 
	printf("\nEnter the adjacency matrix:\n");
 
	for(i=1;i<=n;i++)
 
	for(j=1;j<=n;j++)
 
	{
 
		scanf("%d",&cost[i][j]);
 
		if(cost[i][j]==0)
 
			cost[i][j]=1000;
 
	}
 
	vis[1]=1;
 
	printf("\n");
 
	while(ne < n)
 
	{
 
		for(i=1,min=1000;i<=n;i++)
 
		for(j=1;j<=n;j++)
 
		if(cost[i][j]< min)
 
		if(vis[i]!=0)
 
		{
 
			min=cost[i][j];
 
			a=u=i;
 
			b=v=j;
 
		}
 
		if(vis[u]==0 || vis[v]==0)
 
		{
 
			printf("\n Edge %d:(%d %d) cost:%d",ne++,a,b,min);
 
			mcost+=min;
 
			vis[b]=1;
 
		}
 
		cost[a][b]=cost[b][a]=1000;
 
	}
 
	printf("\n Minimun cost=%d",mcost);
 
	getch();
 
}