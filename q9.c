#include<stdio.h>
int main(){
    int a[10];
    int n;
    int sum=0;
    printf("Enter the numbers");
    for(int i=0;i<=9;i++){
         scanf("%d",&n);
         a[i]=n;
    }
    for(int i=9;i>=0;i--){
        printf("%d\n",a[i]);
    }
    
    return 0;
}