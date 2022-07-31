#include<stdio.h>
int main(){
    char s[100];
    char a[100];
    fgets(s,100,stdin);
    for(int i=0;s[i]!='\0';i++){
        a[i]=s[i];
    }
    for(int i=0;a[i]!='\0';i++){
        printf("%c",a[i]);
    }
}