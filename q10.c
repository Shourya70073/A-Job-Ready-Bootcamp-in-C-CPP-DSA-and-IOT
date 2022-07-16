#include<stdio.h>
int main(){
    int n=5;
    int i=1;
    while(i<=10){
        printf("%d * %d = %d",n,i,n*i);
        printf("\n");
        i++;
    }
    return 0;
}