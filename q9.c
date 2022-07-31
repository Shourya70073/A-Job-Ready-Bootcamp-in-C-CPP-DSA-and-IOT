#include<stdio.h>
int main(){
    char string[100];
    fgets(string,100,stdin);
    int n=findlen(string);
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
int findlen(char s[]){
    int count=0;
    for(int i=0;s[i];i++)
       count++;

    return count-1;
}