#include<stdio.h>
int main(){
    int count=1;
    char a[100];
    fgets(a,100,stdin);
    for(int i=0;a[i]!='\0';i++){
        count++;
    }
    printf("%d",count-1);
}