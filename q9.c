#include<stdio.h>
int main(){
    int n,sum=0;
    
    scanf("%d",&n);
    int a=n;
    while(n>0){
    int rem=n%10;
    sum=sum+(rem*rem*rem);
    n=n/10;
    }
    if(sum==a){
        printf("Yes the no is armstrong");
    }
    else{
        printf("No the no is not armstrong");
    }
    return 0;

}