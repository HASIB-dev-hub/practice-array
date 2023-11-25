//read value in 1D array
#include<stdio.h>
int main()
{
int arr[5];
printf("Enter the value of array:");
for(int i=0;i<5;i++)
{
    scanf("%d",&arr[i]);
}
printf("Array in accending order:\n");
for(int i=0;i<5;i++)
{
    printf("%d",arr[i]);
}
printf("\n");
printf("Array print reverce:\n");
for(int i=4;i>=0;i--)
{
    printf("%d",arr[i]);
}



    return 0;
}