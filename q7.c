#include<stdio.h>
int main(){
    int a;
    int b;
    scanf("%d%d",&a,&b);
    for(int i=a;i<=b;i++){
        int flag=0;
        for(int j=2;j<i;j++){
           if(i%j==0){
            flag=1;
            break;
           }
        }
        if(flag==0){
            printf("%d\n",i);
        }
    }
    return 0;
}