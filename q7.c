#include<string.h>
#include<stdio.h>
int findlen(char *);
void rev(char *);
int main(){
    char s[100];
    char *a;
    fgets(s,100,stdin);
    strcpy(a,s);
    rev(s);
    if(!strcmp(a,s)){
        printf("Yes the string is palinfrome");
    }
    else{
        printf("No the string is not palindrome");
    }
    return 0;
   
}
int findlen(char s[]){
    int count=0;
    for(int i=0;s[i];i++)
       count++;

    return count-1;
}
void rev(char s[]){
    int i=0;
    int j=findlen(s)-1;
    while(i<=j){
        char temp=s[i];
        s[i]=s[j];
        s[j]=temp;
        i++;
        j--;
    }
}