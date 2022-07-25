#include <stdio.h>
void main()
{
    int n;
    printf("\n Enter the  number of disks:");
    scanf("%d",&n);
    hanoi(n,1,2,3);

}

void hanoi(int n,int a, int b ,int c)
{
    if(n==1)
    {
        printf("Disk 1 moved from %d to %d \n",a,c);
        return;
    }
    hanoi(n-1,a,c,b);
    printf("Disk %d moved from %d to %d \n",n,a,c);
    hanoi(n-1,b,a,c);

}
