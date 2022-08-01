#include<stdio.h>
int main(){
    char c;
    scanf("%c",&c);
    if(c>=65 && c<=90){
        printf("Upper Case");
    }
    else if(c>=97 && c<=122){
        printf("Lower Case");
    }
    else if(c>=48 && c<=57){
        printf("Digit");
    }
    else{
        printf("Special character");
    }
    return 0;
}