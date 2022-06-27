#include <stdio.h>
int max(int a, int b) { return (a > b)? a : b; }
int knapsack(int capacity, int wt[], int val[], int n)
{
   int i, w;
   int K[n+1][capacity+1];
   for (i = 0; i <=n; i++)// 0,1  n=5
   {
       for (w = 0; w <=capacity; w++)// 0,1
       {
           if (i==0 || w==0)
               K[i][w] = 0;
           else if (wt[i-1] <= w)
            K[i][w] = max(val[i-1] + K[i-1][w-wt[i-1]],K[i-1][w]);
           else
                 K[i][w] = K[i-1][w];
       }
   }

   return K[n][capacity];
}

int main()
{
    int val[100],wt[100],capacity,n,i;
    printf("Enter the no of items:\n");
    scanf("%d",&n);
    printf("Enter the weight and value of items:\n");
    for(i=0;i<n;i++)
    scanf("%d%d",&wt[i], &val[i]);
    printf("Enter the knapsack size:\n");
    scanf("%d",&capacity);
    printf("\nValue = %d", knapsack(capacity, wt, val, n));
    return 0;
}
