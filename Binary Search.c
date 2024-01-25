//Binary search always works with ascending oder!

#include<stdio.h>
int main()
{
    int i,n,a[100],item,beg,end,mid;
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
    beg=0;
    end=n-1;
    mid=((beg+end)/2);
    while(beg<=end)
    {
        if(a[mid]<item)
            beg=mid+1;
        else if(a[mid]==item)
        {
            printf("\n%d is found at %d position!\n",item,mid+1);
            break;
        }
        else
            end=mid-1;
        mid=((beg+end)/2);
    }
    if(beg>end)
    {
        printf("\nItem isn't found!\n");
    }
}
