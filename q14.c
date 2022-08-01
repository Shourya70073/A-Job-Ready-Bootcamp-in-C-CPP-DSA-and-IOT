#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n%3==0||n%7==0){
        printf("Yes it is divisible by 3 or 7");
    }
    else{
        printf("Not divisble by 3 or 7 ");
    }
    return 0;
}