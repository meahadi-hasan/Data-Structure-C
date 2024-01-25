#include<stdio.h>
int main()
{
    int i,n,a[100],temp,pass,com;
    printf("Enter the range of Array: ");
    scanf("%d",&n);
    printf("\nEnter the element of Array: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("\nAfter traversing: ");
    for(i=0;i<n;i++)
        printf("%4d",a[i]);
    for(pass=n-1;pass>0;pass--)
        for(com=0;com<pass;com++)
        if(a[com]>a[com+1])
    {
        temp=a[com];
        a[com]=a[com+1];
        a[com+1]=temp;
    }
    printf("\nAfter Sorting: ");
    for(i=0;i<n;i++)
        printf("%4d",a[i]);
}
