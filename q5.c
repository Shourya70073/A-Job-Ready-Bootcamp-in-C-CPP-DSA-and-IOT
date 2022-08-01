#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    (((n/100)>=1) &&((n/100)<=9))
    ?printf("3 digit")
    :printf("not a 3 digit");
    return 0;
}