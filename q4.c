#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n*2;i++){
        if(i%2!=0){
            printf("%d",i);
            printf("\n");
        }
    }
    return 0;
}