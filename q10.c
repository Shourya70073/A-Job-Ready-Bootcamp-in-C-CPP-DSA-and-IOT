#include<stdio.h>
int main(){
    char s[100];
    fgets(s,100,stdin);
    int n=findlen(s);
    sort(s,n);
    findrep(s);
    return 0;
}
int findlen(char s[]){
    int count=0;
    for(int i=0;s[i];i++)
       count++;

    return count-1;
}

void sort(char string[],int n){
    for (int i = 0; i < n-1; i++) {
      for (int j = i+1; j < n; j++) {
         if (string[i] > string[j]) {
           char temp = string[i];
            string[i] = string[j];
            string[j] = temp;
         }
      }
   }
}
void findrep(char*s){
    char temp='\0';
    for(int i=0;s[i]!='\0';i++){
        if(s[i]==s[i+1]){
            
            if(s[i]!=temp){
                printf("%c",s[i]);
            }
            temp=s[i];
        }
    }
}