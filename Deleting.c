#include<stdio.h>
int main()
{
    int a[100],i,n,p;
    printf("Enter the range of Array: ");
    scanf("%d",&n);
    printf("\nEnter the element in Array: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("\nAfter Traversing: ");
    for(i=0;i<n;i++)
        printf("%4d",a[i]);
    printf("\nEnter the position to Delete: ");
    scanf("%d",&p);

    if(p<0 || p>=n)
    {
        printf("Deleting is impossible!");
    }
    else
    {
        for(i=p;i<n-1;i++)
            a[i]=a[i+1];
            n--;

        printf("\nAfter Deleting: ");
    for(i=0;i<n;i++)
        printf("%4d",a[i]);
    }
       return 0;
}

