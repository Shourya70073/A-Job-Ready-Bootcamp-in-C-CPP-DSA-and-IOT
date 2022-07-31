#include<stdio.h>
int main(){
    char c[100];
    fgets(c,100,stdin);
    for(int i=0;c[i]!='\0';i++){
        if(c[i]>=65 && c[i]<=90){
            c[i]+=32;
        }
    }
    printf("%s",c);
}