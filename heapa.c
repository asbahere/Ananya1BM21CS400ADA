#include <stdio.h>
#include<stdio.h>
#include <time.h>

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void delay(){
int i,n;
for(i=0;i<100000;i++){
        n=100/50;
}
}

void heap(int arr[], int n, int i) {
    delay();

  int largest = i;
  int left = 2 * i + 1;
  int right = 2 * i + 2;
  if (left < n && arr[left] > arr[largest])
    largest = left;
  if (right < n && arr[right] > arr[largest])
    largest = right;
  if (largest != i) {

    swap(&arr[i], &arr[largest]);
    heap(arr, n, largest);

  }
}

void heapSort(int arr[], int n) {
    int i;
  for (i = n / 2 - 1; i >= 0; i--)
    heap(arr, n, i);

  for (i = n - 1; i >= 0; i--) {
    swap(&arr[0], &arr[i]);
    heap(arr, i, 0);
  }

}

void printArray(int arr[], int n)
{
    int i;
  for (i = 0; i < n; i++)
    printf("%d ", arr[i]);
  printf("\n");

}

int main()
{
    clock_t start,end;
    srand(time(0));
    int i;
    int n;
    printf("Enter size of array:");
    scanf("%d",&n);
    int arr[n];

    for(i=0;i<n;i++){
        arr[i]=rand()/100;
    }
    start=clock();
    heapSort(arr, n);
    end=clock();
    printf("Total time taken:%f",(double)(end-start)/CLOCKS_PER_SEC);

    printf("\n Given array \n");
    printArray(arr, n);
    heapSort(arr, n);
    printf("Sorted array \n");
     printArray(arr, n);


}
