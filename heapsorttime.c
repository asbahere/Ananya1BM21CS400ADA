#include<stdio.h>
#include<time.h>
void swap(int *a,int *b)
{
  int temp=*a;
  *a=*b;
  *b=temp;
}



/*void delay()
{
 int i,n;
 for(i=0;i<100000;i++)
 {
   n=100/50;
 }
} */

void heap(int a[],int n,int i)
{
  //delay();

  int large=i;
  int l=2*i+1;
  int r=2*i+2;

  if(l<n && a[l] > a[l])
    large=l;

  if(r<n && a[r]>a[large])
    large=r;

  if(large!=i)
  {
      swap(&a[i],&a[large]);
      heap(a,n,large);
  }
}


void heapsort(int a[],int n)
{
    int i;
    for(i=n/2-1;i>=0;i--)
        heap(a,n,i);
    for(i=n-1;i>=0;i--)
    {
        swap(&a[0],&a[i]);
        heap(a,i,0);
    }
}

  void printarray(int a[],int n)
{
  int i;
  for(i=0;i<n;++i)
    printf("%d",a[i]);
  printf("\n");
}

/*int main()
{
    clock_t start,end;
    srand(time(0));
    int i,n;
    printf("Enter size of array:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        a[i]=rand()/100;
    }
    start=clock();
    heapsort(a,n);
    end=clock();
    printf("Total time taken %f",(double)(end-start)/CLOCKS_PER_SEC);

     /* printf("\n Given array \n");
      printarray(a,n);
    heapsort(a,n);
    printf("Sorted array:\n");
    printarray(a,n);} */



int main()
{
    int n,i,j,temp,c;
    printf("Enter value of N:");
    scanf("%d",&n);
    int a[10];
    printf("Generating random nos. :\n");
    for(c=0;c<n;c++)
    {
        a[c]=rand()%100+1;
        printf("%d\t\n",a[c]);
    }
    clock_t start=clock();
    heapsort(a,n);
    clock_t end=clock();
    printf("Sorted array is \t");
    printarray(a,n);
    double time=(double)(end-start)/CLOCKS_PER_SEC;
    printf("\n Execution time: %.10fseconds\n",time);
}
