#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int bs(int[],int,int,int);
int ls(int[],int,int,int);

void bubsort(int[],int);

int n,a[10000];

int main()
{
  int ch,key,search_stat,temp;
  clock_t end,start;
  unsigned long int i,j;

  while(1)
  {
    printf("\n 1. Binary Search \n 2. Linear Search \n 3. Exit\n");
    printf("\n Enter choice\n");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1:
        n=1000;
        while(n<=5000)
        {
          for(i=0;i<n;i++)
          {
            //a[i]=random(1000);
            a[i]=i;
          }

          key=a[n-1];
          start=clock();
          search_stat=bs(a,0,n-1,key);
          if(search_stat==-1)
           printf("\n Key not found");
          else
           printf("\n Key is found at position %d",search_stat);

           // dummy to create loop
              for(j=0;j<5000000;j++)
              {
                temp=38/600;
              }
              end=clock();
              printf("\n Time for n=%d is %f  Sec ",n,(((double)(end-start))/CLOCKS_PER_SEC));
              n=n+1000;
              }
              break;

            case 2:

              n=1000;
        while(n<=5000)
        {
          for(i=0;i<n;i++)
          {
            //a[i]=random(1000);
            a[i]=i;
          }

          key=a[n-1];
          start=clock();
          search_stat=ls(a,0,n-1,key);
          if(search_stat==-1)
           printf("\n Key not found");
          else
           printf("\n Key is found at position %d",search_stat);

           // dummy to create loop
              for(j=0;j<5000000;j++)
              {
                temp=38/600;
              }
              end=clock();
              printf("\n Time for n=%d is %f  Sec ",n,(((double)(end-start))/CLOCKS_PER_SEC));
              n=n+1000;
              }
              break;


              default:
                exit(0);
             }
            getchar();
            }
           }

           void bubsort(int a[],int n)
           {
             int i,j,temp;
             for(i=0;i<=n-2;i++)
             {
               for(j=0;j<n-2;j++)
               {
                 if(a[j]>a[j+1])
                 {
                   temp=a[j];
                   a[j]=a[j+1];
                   a[j+1]=temp;

                 }
                }
                }
               }

               int bs(int a[],int low,int high,int key)
               {
                 int mid;
                 if(low>high)
                 {
                  return -1;
                 }
                 mid=(low+high)/2 ;
                 if(key== a[mid])
                 {
                   return mid;
                 }
                 if(key<a[mid])
                 {
                   return bs(a,low,mid-1,key);
                 }
                 else
                 {
                   return bs(a,mid+1,high,key);
                 }

               }


               int ls(int a[],int i,int high,int key)
               {
                 if(i>high)
                 {
                   return -1;
                 }
                 if(key==a[i])
                 {
                   return i;
                 }
                 else
                 {
                   return ls(a,i+1,high,key);
                 }
                 }
