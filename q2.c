#include<stdio.h>
int main(){
    printf("Enter the String:- ");
    char c[100];
    fgets(c,100,stdin);
    char a;
    printf("Enter the character to search:- ");
    scanf("%c",&a);
    int count=0;
    for(int i=0;c[i]!='\0';i++){
        if(c[i]==a){
            count++;
        }
    }
    printf("\n%d",count);
}