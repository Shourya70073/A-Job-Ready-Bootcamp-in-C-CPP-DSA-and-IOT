#include<stdio.h>
int main(){
    int a[10];
    int sume=0,sumo=0;
    printf("Enter the numbers");
    for(int i=0;i<=9;i++){
         scanf("%d",&a[i]);
         
    }
    for(int i=0;i<=9;i++){
        if(a[i]%2==0)
           sume=sume+a[i];
        else{
            sumo=sumo+a[i];
        }
    }
    printf("%d\n",sume);
    printf("%d",sumo);
    
}