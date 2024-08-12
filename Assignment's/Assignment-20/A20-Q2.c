#include<stdio.h>
#include<string.h>
struct employee
{
    char name[30];
    int id;
    double sallary;
};

int main()
{
    int n = 3;
    struct employee emp[n];

    printf("Enter %d employees details\n\n",n);
    for(int i=1;i<=n;i++)
    {
        printf("Employee %d:-\n",i);

        printf("Name:");
        scanf("%s",emp[i].name);
        printf("ID:");
        scanf("%d",&emp[i].id);
        printf("Sallary:");
        scanf("%lf",&emp[i].sallary);
    }
printf("\n---------------------------ALL EMPLOYEE DETAIL--------------------\n");
    for(int i=1;i<=n;i++)
    {
        printf("Employee [%d]\n",i);
        printf("Name\t:%s\n",emp[i].name);
        printf("ID\t:%d\n",emp[i].id);
        printf("Sallary\t:%.2lf\n",emp[i].sallary);
    }
}
