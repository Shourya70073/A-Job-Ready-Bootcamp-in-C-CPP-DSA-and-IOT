#include<stdio.h>
int main(){
    int count=0;
    int i=1;
    while (1)
    {    
        if(count==10){
            break;
        }
         if(i%2==0){
            printf("%d",i);
            printf("\n");
            count++;
           
         }
         i++;
       
    }
    return 0;
    
}