#include<stdio.h>
struct birthday
{
    int year;
    int month;
    int day;
};

int main()
{
    int n = 5;
    struct birthday bd[n];

    printf("Enter %d Birthday's\n\n",n);

    for(int i=1;i<=n;i++)
    {
        printf("Enter %d birthday :",i);
        scanf("%d%d%d",&bd[i].year,&bd[i].month,&bd[i].day);
    }

    printf("-----------------BIRTHDAY'S DETAIL'S-------------------\n\n");

    for(int i=1;i<=n;i++)
    {
    printf("Birthday %d\t: %d-%d-%d\n",i,bd[i].year,bd[i].month,bd[i].day);
    }

}
