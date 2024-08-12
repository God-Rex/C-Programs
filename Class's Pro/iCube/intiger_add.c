#include<stdio.h>
int main(){
    int t;
    int in,sum=0;S
    for(t=0;;t++){
        scanf("%d",&in);
        if(in==-1){
            break;
        }
        sum=sum+in;
    }
    printf("%d",sum);
}