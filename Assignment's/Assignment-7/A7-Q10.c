#include<stdio.h>
int main(){
    int s1,s2,s3;
    printf("Enter 1st side of tringle =");
    scanf("%d",&s1);
    printf("Enter 2nd side of tringle =");
    scanf("%d",&s2);
    printf("Enter 3rd side of tringle =");
    scanf("%d",&s3);
    if(s1+s2>s3||s2+s3>s1||s3+s1>s2){
        printf("Tringle is valid");
    }
    else{
        printf("Tringle is not valid");
    }
}