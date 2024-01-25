//2-D Array sum

#include<stdio.h>
int main()
{
    int i,j,r1,c1,a[10][10],r2,c2,b[10][10],c[10][10];
    printf("Enter the range of Row1: ");
    scanf("%d",&r1);
    printf("Enter the range of column1: ");
    scanf("%d",&c1);
    printf("Enter the range of 2D Array1:\n");
    for(i=0;i<r1;i++)
        for(j=0;j<c1;j++)
        scanf("%d",&a[i][j]);

    printf("\nEnter the range of Row2: ");
    scanf("%d",&r2);
    printf("Enter the range of column2: ");
    scanf("%d",&c2);
    printf("Enter the range of 2D Array2:\n");
    for(i=0;i<r2;i++)
        for(j=0;j<c2;j++)
        scanf("%d",&b[i][j]);

    printf("\nAfter Traversing1:\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%4d",a[i][j]);
        }
        printf("\n");
    }
    printf("\nAfter Traversing2:\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%4d",b[i][j]);
        }
        printf("\n");
    }
    if(r1==r2 && r2)
    {
        for(i=0;i<r1;i++)
        for(j=0;j<c1;j++)
        c[i][j]=a[i][j]+b[i][j];
        printf("\nAfter Addition of Array1 & Array2:\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                printf("%4d",c[i][j]);
            }
            printf("\n");
        }
        
    }   
    else
        printf("\nAddition is impossible!");
}
