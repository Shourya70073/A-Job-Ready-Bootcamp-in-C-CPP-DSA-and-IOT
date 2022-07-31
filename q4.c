#include<stdio.h>
int main(){
    int a[10];
    
    printf("Enter the numbers");
    for(int i=0;i<=9;i++){
         scanf("%d",&a[i]);
         
    }
    int max=a[0];
    for(int i=0;i<=9;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    printf("%d\n",max);
    
    
}