#include<stdio.h>
void dfs(int v);
int G[10][10],visited[10],count=0,n,i,j;
void main()
{
    //int i,j;
    printf("Enter the no of vertices :\n");
    scanf("%d",&n);
    printf("Enter the adjacent matrix:\n");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
    scanf("%d",&G[i][j]);
    for(i=0;i<n;i++)
    visited[i]=0;
    printf("The DFS traversal is:\n");
    dfs(0);
    if(count<n)
    printf("Graph is not connected");
    else
    printf("Graph is connected");

}
void dfs(int v)
{
    int w;
    count++;
    printf("%d\t",v);
    visited[v]=1;
     for(w=0;w<n;w++)
    if(visited[w]!=1&&G[v][w]==1)
    dfs(w);
}
