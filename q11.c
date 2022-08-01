#include<stdio.h>
int main(){
    int m1,m2,m3,m4,m5;
    printf("Enter the marks of 5 subjects: ");
    scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
    double per=(m1+m2+m3+m4+m5)/5.0;
    if(per>=33.0){
        printf("Student is passed");
    }
    else{
        printf("Student is failed");
    }
    return 0;
}