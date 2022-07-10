#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int rem=n%10;
    n=n-rem;
    printf("%d",n);
    return 0;
}