#include<stdio.h>
int main(){
    char c[100];
    printf("Enter the String:- ");
    fgets(c,100,stdin);
    int alpha=0;
    int digit=0;
    int sc=0;
    for(int i=0;c[i];i++){
        if(c[i]>='A'&&c[i]<='Z'){
            alpha++;
        }
        else if(c[i]>='a'&&c[i]<='z'){
            alpha++;
        }
        else if(c[i]>='0'&&c[i]<='9'){
            digit++;
        }
        else{
            sc++;
        }
    }
    printf("No of alphabet %d \n",alpha);
    printf("No of digit %d\n",digit);
    printf("No of Special Character %d\n",sc);
    return 0;
}