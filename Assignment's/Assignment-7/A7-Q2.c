#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter two no. :");
    scanf("%d%d",&a,&b);
    printf("Choose the given option:-/n1=Add\n2=sub\n3=multiplication\n4=divide\n5=NO OPRATION HAPPEN\n");
    scanf("%d",&c);
    switch (c)
    {
    case 1:{
        printf("SUM = %d",a+b);
        break;}
    case 2:{
        printf("SUBTRACTION = %d",a-b);
        break;
    }
    case 3:{
        printf("MULTIPLICATION = %d",a*b);
        break;
    }
    case 4:{
        printf("DIVISION = %d",a/b);
        break;
    }
    default:{
        printf("NO OPRATION HAPPEN");
        break;}
    }
}