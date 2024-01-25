//2-D Array Traversing

#include<stdio.h>
int main()
{
    int i,j,r,c,a[10][10];
    printf("Enter the range of Row: ");
    scanf("%d",&r);
    printf("\nEnter the range of column: ");
    scanf("%d",&c);
    printf("\nEnter the range of 2D Array:\n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
        scanf("%d",&a[i][j]);
    printf("\nAfter Traversing:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%4d",a[i][j]);
        }
        printf("\n");
    }
}
