#include<stdio.h>
int main(){
    char c;
    scanf("%c",&c);
    if(c>=65 && c<=90){
        printf("Upper case");
    }
    else if(c>=97 && c<=122){
        printf("Lower case");
    }
    else{
        printf("Special character");
    }
    return 0;
}