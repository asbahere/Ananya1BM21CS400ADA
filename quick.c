#include <stdio.h>
#include <time.h>

void quicksort(int[],int,int);
int partition(int[],int,int);

int main()
{

	int a[50],n,i;
    //double time=0;
	printf("ENTER THE NUMBER OF ELEMENTS ARRAY?");
	scanf("%d",&n);
	printf("\nENTER THE ELEMENTS OF AN ARRAY:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
   // start = clock();
    quicksort(a,0,n-1);
	//end = clock();
	//time = ((double) (end - start)) / (double)CLOCKS_PER_SEC;
	printf("\nArray after sorting:");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
//printf("\nTIME TAKEN TO SORT IS %f\n",time);
	return 0;
}

void quicksort(int a[],int l,int u)
{
	int j;
	if(l<u)
	{
		j=partition(a,l,u);
		quicksort(a,l,j-1);
		quicksort(a,j+1,u);
	}
}

int partition(int a[],int l,int u)
{
	int v,i,j,temp;
	v=a[l];
	i=l;
	j=u+1;

	while(i<j)
	{
		do
			i++;

		while(a[i]<v&&i<=u);

		do
			j--;
		while(v<a[j]);

		if(i<j)
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}

	a[l]=a[j];
	a[j]=v;
	return(j);
}
