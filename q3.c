#include<stdio.h>
#include<stdlib.h>
int main(){
    int a=0;
    int b=1;
    int n;
   
    scanf("%d",&n);
    if(n==0){
        printf("Yes the no. is in fibonacci series");
        exit(0);
    }
    else if(n==1){
        printf("Yes the no. is in fibonacci series");
        exit(0);
    }
    else{
        while(1){
        int c=a+b;

        if(c==n){
            
            printf("Yes the no is in fibonacci series");
            exit(0);
        }
        if(c>n){
            break;
        }
        int temp=b;
        b=c;
        a=temp;
    }
    printf("No is not in fib series");
    }
    return 0;
    
}