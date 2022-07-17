#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n==0){
        printf("0");
    }
    else if(n==1){
        printf("1");
        
    }
    else{
       int a=0,b=1,c=0;
    int i=2;
    while(i<=n){
        c=a+b;
        int temp=b;
        b=c;
        a=temp;
        i++;
    }
    printf("%d",c); 
    }
    
    return 0;
}