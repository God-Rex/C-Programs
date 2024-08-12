#include<stdio.h>
int main(){
    int red;
    printf("Enter radius of circle =");
    scanf("%d",&red);
    float ans =(3.14)*(red*red);
    printf("Area of circle =%.2fsq.unit's",ans);
    return 0;
}