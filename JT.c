#include<stdio.h>
#include<conio.h>
int nn,i,count=0,p[100],pi[100],dir[100];
void pperm()
{
    int i;
    count=count+1;
    printf("[%2d]",count);
    for(i=1;i<=nn;++i)
        printf("%d",p[i]);

}

void trans(int x,int y)
{

    printf("(%d %d)",x,y);
    printf("\n");
}

void move(int x,int d)
{

    int z;
    trans(pi[x],pi[x]+d);
    z=p[pi[x]+d];
    p[pi[x]]=z;
    p[pi[x]+d]=x;
    pi[z]=pi[x];
    pi[x]=pi[x]+d;
}

void perm(int n)
{

    int i;
    if(n>nn)
        pperm();
    else
    {
        pperm(n+1);
        for(i=1;i<=n-1;++i)
        {
            move(n,dir[n]);
            perm(n+1);
        }
        dir[n]=-dir[n];
    }
}
int main()
{

    printf("Enter the values of the n:");
    scanf("%d",&nn);
    printf("\n");
    for(i=1;i<=nn;++i)
    {
        dir[i]=-1;
        p[i]=i;
        pi[i]=i;
    }
   perm(1);
   printf("\n");
   return 0;
}
