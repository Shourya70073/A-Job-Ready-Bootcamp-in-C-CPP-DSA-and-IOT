#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the two numbers: ");
    scanf("%d %d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("a=%d b=%d ",a,b);
    return 0;


}