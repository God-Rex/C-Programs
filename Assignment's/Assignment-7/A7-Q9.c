#include<stdio.h>
int main(){
    float cp,sp;
    printf("Enter Cost price =");
    scanf("%f",&cp);
    printf("Enter Selling Price =");
    scanf("%f",&sp);
    if(sp>cp){
        printf("Getting Profit\n");
        float pro;
        pro = ((sp-cp)/cp)*100;
        printf("Percentage = %.2f%%",pro);
    }
    if(cp>sp){
        printf("Getting Loss\n");
        float loss;
        loss = ((cp-sp)/cp)*100;
        printf("Percentage = %.2f%%",loss);
    }

}