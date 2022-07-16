#include<stdio.h>
int main(){
    int sum=0;
    int count=0;
    int i=1;
    int n;
    scanf("%d",&n);
    while (1)
    {
       if(count==n){
        break;
       } 
       if(i%2!=0){
        sum=sum+i;
        count++;
       }
       i++;
    }
    printf("%d",sum);
    return 0;
    
}