// C program to calculate matrix upto index '10 x 10'

#include<stdio.h>
int main()
{
    int a[10][10], b[10][10], c[10][10], i, j, m, n;

    printf("\nEnter the index of matrix:");
    scanf("%d%d",&m,&n);

    printf("\n Enter the first matrix:\n");
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }  
        

    printf("\nEnter the second matrix:\n");
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }  

    printf("\nThe matrix A is:\n");
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }  

    printf("\nThe matrix B is:\n");
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }  

    printf("\nSum of matrix is:\n");
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }  
 
    return 0;
}
