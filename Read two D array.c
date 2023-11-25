//Read value 2D array
#include<stdio.h>
int main()
{
int mat[3][3];
//scane value:
printf("Enter the value of matrix:\n");
for(int i=0;i<3;i++)
{

    for(int j=0;j<3;j++)
    {
        scanf("%d",&mat[i][j]);
    }
}

//print valude:
printf("Read matrix:\n");

for(int i=0;i<3;i++)
{

    for(int j=0;j<3;j++)
    {
        printf("%d ",mat[i][j]);
    }
    printf("\n");
}
    return 0;
}