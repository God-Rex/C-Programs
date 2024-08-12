#include<stdio.h>
#include<string.h>
struct student
{
    int sId;
    char sName[30];
    int sroll;
    double sMobNo;
};

int main()
{
    int n = 4;
    struct student stu[n];

    printf("Enter %d student details\n\n",n);
    for(int i=1;i<=n;i++)
    {
        printf("Student %d:-\n",i);

        // printf("Student Id:");
        // scanf("%d",&stu[i].sId);

        // printf("Student Name:");
        // scanf("%s",stu[i].sName);

        printf("Student Roll-No:");
        scanf("%d",stu[i].sroll);

        // printf("Student Mob-no.:");
        // scanf("%lf",&stu[i].sMobNo);
    }
printf("\n---------------------------ALL STUDENT'S DETAIL--------------------\n");
    for(int i=1;i<=n;i++)
    {
        printf("Student [%d]\n",i);
        printf("Student ID\t:%d\n",stu[i].sId);
        printf("Student Name\t:%s\n",stu[i].sName);
        printf("Student Roll-No.\t:%d\n",stu[i].sroll);
        printf("Student Mob-No.\t:%.2lf\n",stu[i].sMobNo);
    }
}
