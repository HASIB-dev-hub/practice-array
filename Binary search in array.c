
//Bibary search in arry
#include<stdio.h>
int main()
{
int item,left,right,mid;
int arr[]={1,2,3,4,5,6,7};
printf("Enter any value:");
scanf("%d",&item);
left=0;
right=6;
while(left<=right)
{
mid=(left+right)/2;
if(arr[mid]==item)
{
printf("The number is available ");
return 0;
}
else if(arr[mid]<item)
{
    left=mid+1;
}
else
right=mid-1;
}
printf("Not available in array");

    return 0;
}