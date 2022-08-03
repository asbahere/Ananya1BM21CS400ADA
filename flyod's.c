#include<stdio.h>
#include<stdlib.h>

int cm[10][10],dm[10][10],n;

int min(int a,int b)
{
    return (a<b) ? a:b;
}

void path()
{
    int i,j,k;
    for(k=0;k<n;k++)
    {
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
           dm[i][j]=min(dm[i][j],dm[i][k]+dm[k][j]);
        }
    }
}
}

void main()
{
    int i,j;
    printf("\nEnter the no of vertices:\n");
    scanf("%d",&n);
    printf("\nEnter the cost matrix:\n");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
    {
        scanf("%d",&cm[i][j]);
        dm[i][j]=cm[i][j];
    }
    path();
    printf("\n The final distance:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf(" %d ",dm[i][j]);
        }
            printf("\n");
    }
}




