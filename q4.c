#include<stdio.h>
int main(){
    char c[100];
    fgets(c,100,stdin);
    for(int i=0;c[i]!='\0';i++){
        if(c[i]>=97 && c[i]<=122){
            c[i]-=32;
        }
    }
    printf("%s",c);
}