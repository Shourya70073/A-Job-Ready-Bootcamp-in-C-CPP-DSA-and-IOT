#include<stdio.h>
int main(){
    printf("Enter the String:- ");
    char c[100];
    fgets(c,100,stdin);
    int count=0;
    for(int i=0;c[i]!='\0';i++){
        
        if(

        c[i]=='a'||
        c[i]=='A'||
        c[i]=='e'|| 
        c[i]=='E'|| 
        c[i]=='o'|| 
        c[i]=='O'|| 
        c[i]=='u'|| 
        c[i]=='U'||
        c[i]=='i'||
        c[i]=='I'

        )

        {
            count++;
        }
    }
    printf("%d",count);
}