#include<stdio.h>
int main(){
    int count=0;
    char a[100];
    fgets(a,100,stdin);
    for(int i=0;a[i]!='\0';i++){
        count++;
    }
    int i=0;
    int j=count-1;
    while(i<=j){
        char temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;

    }
    printf("%s",a);
    return 0;
}