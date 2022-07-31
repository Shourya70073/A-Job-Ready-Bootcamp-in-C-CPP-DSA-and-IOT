#include<stdio.h>
int check(char *);
int main(){
    char s[100];
    fgets(s,100,stdin);
    if(check(s)){
        printf("Yes the given string is alphanumeric");
    }
    else{
        printf("No the given string is not alphanumeric");
    }
    return 0;
}
int check(char s[]){
    int c=0,d=0;
    for(int i=0;s[i]!='\0';i++){
        if((s[i]>='A'&& s[i]<='Z')||(s[i]>='a'&& s[i]<='z')){
            c =1;
        }
        else if(s[i]>='0' && s[i]<='9'){
            d=1;
        }
        if(c==1 && d==1){
            return 1;
        }
    }
    return 0;
}