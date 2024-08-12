#include<stdio.h>
int main(){
    int weight,height;
    int x;
    int count=0;
    scanf("%d",&x);
    for(int i=0;i<x;i++){
        scanf("%d %d",&weight,&height);
        if(weight<50 && height>170){
            count++;
        }
    }
    printf("%d\n",count);
}