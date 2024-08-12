#include<stdio.h>
int main(){
    int a,b,x=0;
    scanf("%d %d",&a,&b);
    if(a>b){
        a=a+b;
        b=a-b;
        a=a-b;
    }
    x=a;
    while(a){
        if(a%x==0 && b%x==0){
            printf("\n%d",x);
            break;
        }
        x--;
    }
}