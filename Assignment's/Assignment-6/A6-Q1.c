#include<stdio.h>
#include<math.h>
int main(){
    int l,b;
     printf("Enter length =");
    scanf("%d",&l);
    printf("Enter breath =");
    scanf("%d",&b);
    printf("Area of Rectangle =%dsq.unit's\n",l*b);
    printf("Perimeter of Rectangle =%dunit's\n\n",2*(l+b));
    //
    int s;
    printf("Enter side of square =");
    scanf("%d",&s);
    int ans =pow(s,2);
    printf("Area of Square =%d\n",ans);
    printf("Perimeter of Square =%d\n\n",4*s);
    //
    int red;
    printf("Enter radius of circle =");
    scanf("%d",&red);
    float answ =(3.14)*(red*red);
    printf("Area of circle =%.2fsq.unit's\n",answ);
    printf("Circumference of circle =%.2funit's\n\n",2*(3.14)*red);
    //
    int t1,t2,t3;
    printf("Enter value of 1st side =");
    scanf("%d",&t1);
     printf("Enter value of 2nd side =");
    scanf("%d",&t2);
     printf("Enter value of 3rd side =");
    scanf("%d",&t3);
    printf("Sum of triangle is =%dunit's\n\n",t1+t2+t3);
    return 0;
}
