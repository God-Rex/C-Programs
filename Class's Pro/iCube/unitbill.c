#include<stdio.h>
int main(){
    float unit;
    scanf("%f",&unit);
    if(unit>=0 && unit<=200){
        printf("%f\n",unit*0.50);
    }
    else if(201<=unit<=400){
        printf("%f\n",unit*0.65);
    }
    else if(401<=unit<=600){
        printf("%f\n",unit*0.80);
    }
    else{
        printf("%f\n",unit*1);
    }
}