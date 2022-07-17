#include<stdio.h>
int main(){
    int a=0;
    int b=1;
    int n;
    
    scanf("%d",&n);
    printf("%d %d ",a,b);
    for(int i=2;i<n;i++){
        int c=a+b;
        printf(" %d ",c);
        int temp=b;
        b=c;
        a=temp;
    }
}