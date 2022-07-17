#include<stdio.h>
int findhcff(int,int);
int findhcff(int a,int b){
    int lcm=0,hcf=0;
     for(int i=a>b?a:b;i<=a*b;i++){
        if(i%a==0 && i%b==0){
            lcm=i;
        }
    }
    hcf=(a*b)/lcm;
    return hcf;
}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(findhcff(a,b)==1){
        printf("They are co prime");
    }
    else{
        printf("They are not co prime");
    }
}