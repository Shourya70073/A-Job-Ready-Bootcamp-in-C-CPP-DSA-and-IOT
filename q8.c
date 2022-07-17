#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int d=n+1;
    while (1)
    {   
        int flag=0;
        for(int i=2;i<d;i++){
            if(d%i==0){
                flag=1;
                break;
            }
        }
        if(flag==0){
            printf("%d",d);
            break;
        }
        d++;
    }
    return 0;
    
}