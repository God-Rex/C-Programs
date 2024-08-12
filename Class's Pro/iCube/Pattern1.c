#include<stdio.h>
int main(){
    for(int i=0;i<5;i++){
        for(int j=0;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }

    for(int i=4;i>0;i--){
        for(int j=i;j>0;j--){
            printf("* ");
        }
        printf("\n");
    }

    for(int i=4;i>0;i--){
        for(int k=i-1;k>0;k--){
            printf(" ");
        }
        for(int j=i;j>i;j--){
            printf("* ");
        }
        printf("\n");
    }
}