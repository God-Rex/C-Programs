#include<stdio.h>
int main(){
    int arr[5],i;
    int *hold = arr;
    printf("Enter number to get sum\n");
    for(i=0;i<5;i++){
        scanf("%d",hold);
        hold++;
    }
    hold = arr;
    for(i=0;i<5;i++){
        printf("Your no.=%d Sum add 10 = %d\n",*hold,*hold+10);
        hold++;
    }
}