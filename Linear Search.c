#include<stdio.h>
int main()
{
    int i,n,a[100],item,found;
    printf("Enter the range of Array: ");
    scanf("%d",&n);
    printf("\nEnter the elements of Array: \n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("\nAfter Traversing: ");
    for(i=0;i<n;i++)
        printf("%4d",a[i]);
    printf("\n\nEnter the element to search: ");
    scanf("%d",&item);
    found=0;
    for(i=0;i<n;i++)
        if(a[i]==item)
        found=1;
    if(found==0)
    {
        printf("\nItem isn't Found!\n");
    }
    else
    {
        printf("\nItem is Found!\n");
    }
    return 0;
}
