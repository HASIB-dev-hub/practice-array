//Sum of 1D array
#include<stdio.h>
int main()
{
int sum=0;
int arr[]={1,2,3,4,5,6,7};
for(int i=0;i<7;i++)
{

    sum=sum+arr[i];
}
printf("The sum is %d",sum);
return 0;
}