#include<stdio.h>
int findlen(char *);
void rev(char *,int,int);
void revword(char *);
int main(){
    char s[100];
    fgets(s,100,stdin);
    revword(s);
    printf("%s",s);
    return 0;
}
void revword(char s[]){
    int k=0;
    
    for(int i=0;s[i]!='\0';i++){
        if(s[i]==32||s[i+1]=='\0'){
            rev(s,k,i-1);
            k=i+1;
        }
    }
}
int findlen(char s[]){
    int count=0;
    for(int i=0;s[i];i++)
       count++;

    return count-1;
}
void rev(char s[],int i,int j){
    
    while(i<=j){
        char temp=s[i];
        s[i]=s[j];
        s[j]=temp;
        i++;
        j--;
    }
}