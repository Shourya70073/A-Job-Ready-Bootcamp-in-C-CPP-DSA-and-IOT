#include<stdio.h>
void rev(int n){
    if(n==0){
        return;
    }
    printf("%d",n%10);
    rev(n/10);
    
}
int main(){
    rev(678);
    return 0;
}