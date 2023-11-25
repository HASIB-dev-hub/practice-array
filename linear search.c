//linear search
#include<stdio.h>
int main()
{
int n;
printf("Enter any number:");
scanf("%d",&n);
int num[5]={1,2,3,4,5,6};
for(int i=0;i<6;i++)
{

    if(num[i]==n)
    {

        printf("This number is available in this arrray and it's indeex number is %d",i);
        return 0;
    }
}
printf("This not available in array");





    return 0;
}