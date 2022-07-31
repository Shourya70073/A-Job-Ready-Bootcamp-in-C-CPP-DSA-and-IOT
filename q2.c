#include<stdio.h>
int findlen(char *);
void rev(char *);
int main(){
    char s[100];
    fgets(s,100,stdin);
    rev(s);
    printf("%s",s);
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