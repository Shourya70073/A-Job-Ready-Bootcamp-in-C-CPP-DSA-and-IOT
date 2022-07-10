#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the numbers");
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a=%d and b=%d",a,b);
}