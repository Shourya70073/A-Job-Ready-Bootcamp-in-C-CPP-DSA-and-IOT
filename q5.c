#include<stdio.h>
void tolcase(char *);
int main(){
    char s[100];
    fgets(s,100,stdin);
    tolcase(s);
    printf("%s",s);
    return 0;
}
void tolcase(char s[]){
    for(int i=0;s[i]!='\0';i++){
        s[i]+=32;
    }
}