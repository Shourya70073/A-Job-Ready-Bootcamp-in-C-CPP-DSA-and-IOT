#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n%2==0 && n%3==0){
        printf("It is divisible by 2 and 3");
    }
    return 0;
}