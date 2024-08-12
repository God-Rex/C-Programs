#include<stdio.h>
int natural(int);
int main(){
    //to print N natural number..
    int n;
    printf("Enter any number = ");
    scanf("%d",&n);
    natural(n);
}
int natural(int n){
    int x=1;
    while(n!=0){
        printf("%d ",x);
        x++;
        n--;
    }
}