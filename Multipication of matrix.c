//Multipication
#include<stdio.h>
int main()
{
int mat[3][3];
int mat2[3][3];
int multi[3][3];
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

for(int i=0;i<3;i++)
{
    
for(int j=0;j<3;j++)
{
    multi[i][j]=0;
    for(int k=0;k<3;k++)
    {
        
     multi[i][j]+=mat[i][k]*mat2[k][j];

    }
  
}

}
printf("The multipication of matrix1 and matrix2:\n");
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {

        printf("%d ",multi[i][j]);
    }
    printf("\n");
}


return 0;
}