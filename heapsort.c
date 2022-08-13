#include<stdio.h>
#include<stdlib.h>

void heap_sort(int [],int);
void build_max_heap(int [],int);
void max_heapify(int [],int,int);

void main()
{

    int i,r,heapsize,n;
    int a[50];
    printf("How many nodes are thre in tree\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter value\n");
        scanf("%d",&a[i]);
    }
    heapsize=n-1;
    heap_sort(a,heapsize);
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}

void heap_sort(int a[],int heapsize)
{
    int i,temp;
    build_max_heap(a,heapsize);
    for(i=heapsize;i>0;i--)
    {
        temp=a[i];
        a[i]=a[0];
        a[0]=temp;
        heapsize--;
        max_heapify(a,0,heapsize);
    }
}

void build_max_heap(int a[],int heapsize)
{

    int i;
    for(i=heapsize/2;i>=0;i--)
    {
        max_heapify(a,i,heapsize);
    }
}

void max_heapify(int a[],int i,int heapsize)
{
    int temp,largest;
    int l=(2*i)+1;//to get left node
    int r=(2*i)+2;//to get righr node

    if((l<=heapsize)&&(a[l]>a[i]))
        largest=l;
    else
        largest=i;

    if((r<=heapsize)&&(a[r]>a[largest]))
        largest=r;

    if(largest!=i)//check parent node i is largest,if lar swap
    {
        temp=a[i];
        a[i]=a[largest];
        a[largest]=temp;
        max_heapify(a,largest,heapsize);
    }
}



