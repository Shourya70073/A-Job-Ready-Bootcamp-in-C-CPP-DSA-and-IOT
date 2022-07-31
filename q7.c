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
    int max=a[0];
    for(int i=0;i<=9;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    int temp=a[0];
    for(int i=0;i<=9;i++){
          if(a[i]>temp && a[i]<max){
            temp=a[i];
          }
    }
    printf("%d",temp);
}