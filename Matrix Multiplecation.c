#include<stdio.h>
int main(){
int m,n,p,q,i,j,k,a[10][10],b[10][10],c[10][10];
printf("\n Enter row of matrix1=");
scanf("%d",&m);
printf("\n Enter colum of matrix1=");
scanf("%d",&n);
for (i=0;i<m;i++)
for(j=0;j<n;j++)
scanf("%d",&a[i][j]);
printf("\n After Traversing of matrix1\n");
for(i=0;i<m;i++)
{

    for(j=0;j<n;j++)
    {

        printf("%4d",a[i][j]);
    }
    printf("\n");
}
printf("\n Enter row of matrix2=");
scanf("%d",&p);
printf("\n Enter colum of matrix2=");
scanf("%d",&q);
for (i=0;i<p;i++)
for(j=0;j<q;j++)
scanf("%d",&b[i][j]);
printf("\n After Traversing of matrix2\n");
for(i=0;i<p;i++)
{

    for(j=0;j<q;j++)
    {

        printf("%4d",b[i][j]);
    }
    printf("\n");
}
if(n==p)
{
    for (i=0;i<m;i++)
    for(j=0;j<q;j++)
    {
        c[i][j]=0;
        for(k=0;k<n;k++)
            c[i][j]=c[i][j]+a[i][k]*b[k][j];
    }
printf("\n After Multiplication\n");
for(i=0;i<m;i++)
{

    for(j=0;j<q;j++)
    {

        printf("%4d",c[i][j]);
    }
    printf("\n");
}
}
else
    printf("Multiplication is impossible....");
}
