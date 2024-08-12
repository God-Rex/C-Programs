#include<stdio.h>
int main(){
    float total,s1,s2,s3,s4,s5;
    printf("Maximum mark's is 100\n");
        printf("Enter marks of 1st sub =");
    scanf("%f",&s1);
        printf("Enter marks of 2nd sub =");
    scanf("%f",&s2);
        printf("Enter marks of 3rd sub =");
    scanf("%f",&s3);
        printf("Enter marks of 4th sub =");
    scanf("%f",&s4);
        printf("Enter marks of 5th sub =");
    scanf("%f",&s5);
    total =((s1+s2+s3+s4+s5)/500)*100;
    printf("Your percentage is =%.2f",total);
    return 0;
}