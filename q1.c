#include<stdio.h>
int main(){
    int x;
    printf("Enter the number");
    scanf("%d",&x);
    x=x%10;
    printf("%d",x);
    return 0;
}