#include<stdio.h>
void touprcase(char *);
int main(){
    char s[100];
    fgets(s,100,stdin);
    touprcase(s);
    printf("%s",s);
    return 0;
}
void touprcase(char s[]){
    for(int i=0;s[i]!='\0';i++){
        s[i]-=32;
    }
}