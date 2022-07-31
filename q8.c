#include<stdio.h>
int count(char *);
int main(){
    char s[100];
    fgets(s,100,stdin);
    printf("%d",count(s));
    return 0;
}
int count(char s[]){
    int c=0;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]==32){
            c++;
        }
    }
    return c+1;
}