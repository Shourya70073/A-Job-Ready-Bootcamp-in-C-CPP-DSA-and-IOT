#include<stdio.h>
void print(int n){
    if(n==0){
        return;
    }
    print(n-1);
    if(n%2==0){
        printf("%d\n",n);
    }
}
int main(){
  print(10);
  return 0;
}