#include <stdio.h>
#include<stdbool.h>
#define infinity 9999
#define max 20

int matrix[max][max],spanning[max][max],n;

int prims()
{
    int cost[max][max];
	int u,v,min_distance,distance[max],from[max];
	int visited[max],no_of_edges,i,min_cost,j;
	
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
			if(matrix[i][j]==0)
				cost[i][j]=infinity;
			else
				cost[i][j]=matrix[i][j];
				spanning[i][j]=0;
		}
	distance[0]=0;
	visited[0]=1;
	
	for(i=1;i<n;i++)
	{
		distance[i]=cost[0][i];
		from[i]=0;
		visited[i]=0;
	}
	
	min_cost=0;
	no_of_edges=n-1;
	
	while(no_of_edges>0)
	{
		min_distance=infinity;
		for(i=1;i<n;i++)
			if(visited[i]==0&&distance[i]<min_distance)
			{
				v=i;
				min_distance=distance[i];
			}
			
		u=from[v];
		
		spanning[u][v]=distance[v];
		spanning[v][u]=distance[v];
		no_of_edges--;
		visited[v]=1;
		
		for(i=1;i<n;i++)
			if(visited[i]==0&&cost[i][v]<distance[i])
			{
				distance[i]=cost[i][v];
				from[i]=v;
			}
		
		min_cost=min_cost+cost[u][v];
	}
	return min_cost;
}

int main()
{
    int i,j,total_cost;
    printf("Enter total nodes : ");
    scanf("%d", &n);
    char alpha[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t'};
    
    for(i=0;i<n;i++)
    {
        
        for(j=0;j<n;j++)
        {
            printf("Enter distance from %c to %c node : ", alpha[i], alpha[j]);
            scanf("%d", &matrix[i][j]);
            if(j==(n-1))
            {
                printf("\n");
            }
        }
        
    }
    printf("\nAdjacency tree matrix:\n");
    printf("  ");
    for(i=0;i<n;i++)
    {
        printf("%c ", alpha[i]);
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("%c ", alpha[i]);
        for(j=0;j<n;j++)
        {
            printf("%d", matrix[i][j]);
            if(j==(n-1))
            {
                printf("\n");
            }
        }
    }
    total_cost = prims(matrix, n);
    
    printf("\nSpanning tree matrix:\n");
    
    printf("  ");
    for(i=0;i<n;i++)
    {
        printf("%c ", alpha[i]);
    }
    printf("\n");
    for(i=0;i<n;i++)
    {   
        printf("%c ", alpha[i]);
        for(j=0;j<n;j++)
        {
            printf("%d ", spanning[i][j]);
            if(j==(n-1))
            {
                printf("\n");
            }
            
        }
    }
    printf("\n\nTotal cost of spanning tree=%d",total_cost);
    return 0;
}
