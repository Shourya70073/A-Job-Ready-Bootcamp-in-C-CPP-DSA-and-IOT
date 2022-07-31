#include<stdio.h>
int main(){
    int a[10];
    int b[10];
    int n;
    int sum=0;
    printf("Enter the numbers");
    for(int i=0;i<=9;i++){
         scanf("%d",&n);
         a[i]=n;
    }
    for(int i=0;i<=9;i++){
       b[i]=a[i];
    }
    
    return 0;
}