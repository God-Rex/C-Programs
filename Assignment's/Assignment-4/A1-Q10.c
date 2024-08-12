#include<stdio.h>
int main(){
    float x;
     printf("Enter temprature (in fahrenheit) =");
    scanf("%f",&x);
    printf("Temprature in Centigrade =%.2f",(x-32)*0.55);
    return 0;
}