#include<stdio.h>
int main(){
//to converting dincence between two cities..
float x;
printf("Enter distence b/w two cities(in kms)\n");
scanf("%f",&x);  
printf("Distence in centimeter = %.2lf cm\n",x*100000);
printf("Distence in milimeter = %.2lf mm\n",x*1000000);
printf("Distence in inches = %.2lf inch\n",x*39370.079);
return 0;
}