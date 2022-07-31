#include<stdio.h>
int main(){
    int a[10];
    int n;
    
    printf("Enter the numbers");
    for(int i=0;i<=9;i++){
         scanf("%d",&a[i]);
        
    }
    int min=a[0];
    for(int i=0;i<=9;i++){
        if(a[i]<min){
            min=a[i];
        }
    }
    printf("%d\n",min);
    
    
}