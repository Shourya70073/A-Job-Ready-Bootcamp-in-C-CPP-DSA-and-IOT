#include<stdio.h>
int main(){
    int a;
    int b;
    int hcf=0;
    int lcm=0;
    scanf("%d%d",&a,&b);
    for(int i=1;i<=a*b;i++){
        if(i%a==0 && i%b==0){
            lcm=i;
        }
    }
    hcf=(a*b)/lcm;
    printf("HCF :- %d ",hcf);
    return 0;
}