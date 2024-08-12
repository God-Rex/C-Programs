#include<stdio.h>
int main(){
    double x;
     printf("Enter distence b/w two cities(in km) =");
    scanf("%lf",&x);
    printf("Distence in milimeter =%.2lf",x*10000000);
    return 0;
}