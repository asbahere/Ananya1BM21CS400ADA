#include<stdio.h>
#include<stdlib.h>

int am[10][10],tc[10][10],n;



void path()
{
    int i,j,k;
    for(k=0;k<n;k++)
    {
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
           if((tc[i][j]) || (tc[i][k] && tc[k][j]))
              tc[i][j]=1;

        }
    }
}
}

void main()
{
    int i,j;
    printf("\nEnter the no of vertices:\n");
    scanf("%d",&n);
    printf("\nEnter the adjacent matrix:\n");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
    {
        scanf("%d",&am[i][j]);
        tc[i][j]=am[i][j];
    }
    path();
    printf("\n Transitive closure:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf(" %d ",tc[i][j]);
        }
            printf("\n");
    }
}





