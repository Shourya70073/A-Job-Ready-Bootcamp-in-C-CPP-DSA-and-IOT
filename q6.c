#include<stdio.h>
int main(){
    char a;
    printf("Enter the character: ");
    scanf("%c",&a);
    a=(int)a;
    printf("%d",a);
    return 0;
}