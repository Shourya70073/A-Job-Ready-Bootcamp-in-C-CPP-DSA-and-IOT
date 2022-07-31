#include<stdio.h>
int findlent(char[]);
int main(){
    char s[100];
    fgets(s,100,stdin);
    int d=findlent(s);
    printf("%d",d);
    return 0;
}
int findlent(char s[]){
    int count=0;
    for(int i=0;s[i];i++)
       count++;

    return count-1;
}