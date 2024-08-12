#include<stdio.h>
int main(){
    int marks[5];
    int i,sum=0;
    printf("\nSubject maxmimum marks =100.\n");
    for(i=0;i<5;i++){
        printf("Enter marks[%d] =",i+1);
        scanf("%d",&marks[i]);
        sum +=marks[i];
    }
    printf("Total obtain marks =%d\n",sum);
    printf("Percentage =%d\n",sum/5);
    printf("Average marks =%d\n",sum/5);
    return 0;
}