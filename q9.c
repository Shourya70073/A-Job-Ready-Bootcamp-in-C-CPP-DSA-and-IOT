#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    for(int i=a>b?a:b;i<=a*b;i++){
        if(i%a==0 && i%b==0){
            printf("%d",i);
            break;
        }
    }
}