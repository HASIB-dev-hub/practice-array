//Decending of Array
#include<stdio.h>
int main()
{
int arr[10]={11,17,12,14,15,13,18,16,20,19};
for(int i=0;i<10;i++)
{
    //for outer loop
for(int j=0;j<10-1-i;j++)
{
//for element change
    if(arr[i]>arr[i+1])
    {
//swap the element
        int con=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=con;
    }
}

}
//print the sorted value with decending order
for(int i=9;i>=0;i--)
{
    printf("%d ",arr[i]);
}





    return 0;
