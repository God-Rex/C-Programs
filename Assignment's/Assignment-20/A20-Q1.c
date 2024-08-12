#include<stdio.h>
#include<string.h>
struct employee{
    char name[100];
    int empid;
    float sallary;
};
int main(){
    struct employee e1;
    // e1.name = "Employee1";//we can't change name in pre-define arry.
    strcpy(e1.name, "Employee1");
    e1.empid = 101;
    e1.sallary = 12000.56;

    struct employee e2;
    strcpy(e2.name, "Employee2");
    e2.empid = 102;
    e2.sallary = 13000.34;

    struct employee e3;
    strcpy(e3.name, "Employee3");
    e3.empid = 103;
    e3.sallary = 13050.34;    

    printf("Employee Name %s\n",e1.name);
    printf("ID = %d\n",e1.empid);
    printf("Sallary = %.2f\n",e1.sallary);
printf("\n\n");
    printf("Employee Name %s\n",e2.name);
    printf("ID = %d\n",e2.empid);
    printf("Sallary = %.2f\n",e2.sallary);
printf("\n\n");
    printf("Employee Name %s\n",e3.name);
    printf("ID = %d\n",e3.empid);
    printf("Sallary = %.2f\n",e3.sallary);    

return 0;
}