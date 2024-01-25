#include<stdio.h>

long Fibo(int n) {
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    return Fibo(n-1) + Fibo(n-2);
}

int main() {
    int n;
    
    printf("\nEnter the range of n=");
    scanf("%d",&n);
    printf("%d Fibo is %d",n,Fibo(n));
}
