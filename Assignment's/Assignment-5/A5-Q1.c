#include<stdio.h>
int main(){
    float x;
     printf("Enter basic sallary =");
    scanf("%f",&x);
    printf("Total Sallary =%.2f",x+(x/100)*70);
    return 0;
}