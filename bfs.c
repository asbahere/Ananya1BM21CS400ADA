#include<stdio.h>
#define MAX 10
void bfs(int v);
void insert_q(int item);
void delet_q();
int isempty();
int G[10][10],visited[MAX],n;
int queue[MAX],front=0,rear=-1;
void main()
{
  int i,j,v;
  printf("Enter the number of vertices:\n");
  scanf("%d",&n);
  printf("Enter the adjacent matrix:\n");
  for(i=0;i<n;i++)
    for(j=0;j<n;j++)
      scanf("%d",&G[i][j]);
    printf("Enter the starting vertex:\n");
    scanf("%d",&v);
    for(i=0;i<n;i++)
       visited[i]=0;
    bfs(v);
 }

 void bfs(int v)
 {
  int w;
  visited[v]=1;
  printf("%d\t",v);
  insert_q(v);
  while(!isempty())
  {
    for(w=0;w<n;w++)
    {
      if(visited[w]==0&&G[queue[front]][w]==1)
      {
        visited[w]=1;
        printf("%d\t",w);
        insert_q(w);
       }
     }
    delet_q();
    }
}
void insert_q(int item)
{
 rear++;
 queue[rear]=item;
}
void delet_q()
{
  front++;
 }
 int isempty()
 {
   if(front>rear)
     return(1);
    else
      return(0);
}
