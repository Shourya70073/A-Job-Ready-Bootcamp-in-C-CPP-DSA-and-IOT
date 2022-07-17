#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    for(int i=a;i<=b;i++){
        int sum=0;
        int n=i;
        while(n>0){
            int rem=n%10;
            sum=sum+(rem*rem*rem);
            n=n/10;
        }
        if(sum==i){
            printf("%d\n",i);
        }
        
    }
    return 0;
}