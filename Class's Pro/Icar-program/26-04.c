#include<stdio.h>
int main(){
    int num[10];
    int i,n=0;
    for(i=0;i<10;i++){
        scanf("%d",&num[i]);
    }
    n=num[0];
    for(i=0;i<10;i++){
        if(n<num[i]){
            n=num[i];
        }
    }
    printf("Greatest number is %d",n);
}