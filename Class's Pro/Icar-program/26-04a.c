#include<stdio.h>
int main(){
    int n=1,m=5,i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=m;j++){
            printf("%d\t",n);
            n++;
        }
        printf("\n");
        m--;
    }
}