#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void selectionsort(int arr[],int n)
{   int min,i,j;
    for( i=0;i<n-1;i++)
    {
        min=i;
        for( j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        swap(&arr[i],&arr[min]);
    }
}
void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void main()
{
    int i;
    clock_t start,end;
    int arr[5000];
    int n;
    int key;
    n=1000;
    while(n<=5000)
    {
       for(i=0;i<n;i++)
       {
           arr[i]=rand();
       }
       start=clock();
       selectionsort(arr,n);
       end=clock();
       printf("\nn:%d",n);
       printf("\nTime(%f milliseconds).\n",((double)(end-start) / (double)CLOCKS_PER_SEC)*1000);
       n=n+1000;
    }
}
