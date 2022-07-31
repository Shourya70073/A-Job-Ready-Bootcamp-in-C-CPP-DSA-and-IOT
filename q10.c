#include<stdio.h>
int main(){
    char s[100];
    fgets(s,100,stdin);
    for(int i=0;s[i]!='\0';i++){
        int count=1;
        for(int j=i+1;s[j]='\0';j++){
           if(s[i]==s[j]){
            count++;
           }
        }
        printf("FREQ OF  %c is %d",s[i],count);
    }
}