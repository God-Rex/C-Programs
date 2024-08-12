#include<stdio.h>
int main(){
    int n;
    printf("Enter an no. b/w 1 to 100 = ");
    scanf("%d",&n);
    if(n>=50 && n<=100){
        printf("SUCCESS");
    }
    else{
        printf("FAIL");
    }
}