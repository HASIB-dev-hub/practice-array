//Subtraction
#include<stdio.h>
int main()
{
int mat[3][3];
int mat2[3][3];
//scane value:
printf("Enter the value of matrix1:\n");
for(int i=0;i<3;i++)
{

    for(int j=0;j<3;j++)
    {
        scanf("%d",&mat[i][j]);
    }
}
printf("\n");
printf("Enter the value of matrix2:\n");
for(int i=0;i<3;i++)
{

    for(int j=0;j<3;j++)
    {
        scanf("%d",&mat2[i][j]);
    }
}
//printf subtraction:
printf("The subtraction  of matrix1 and matrix2:\n");
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{
    printf("%d ",mat[i][j]-mat2[i][j]);
}
printf("\n");
}




return 0;
}