#include<stdio.h>
int main(){
    int i;
    scanf("%d",&i);
    int d1=i/100;
    i=i%100;
    i=i*10;
    i=i+d1;
    printf("%d",i);


    return 0;
}
