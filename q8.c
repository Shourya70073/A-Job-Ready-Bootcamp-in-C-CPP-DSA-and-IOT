#include<stdio.h>
int main(){
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
    if((a&1)==0){
        printf("Even");
    }
    else{
        printf("odd");
    }
return 0;
}