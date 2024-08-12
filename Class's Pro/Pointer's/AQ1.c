#include<stdio.h>
int main(){
    int arr[5];
    int *hold;
    int i;
    hold =arr; // hold = arr; holdm = &i;
    for(i=0;i<5;i++){
        scanf("%d",hold);
        hold++;
    }
    hold=arr;
    for(i=0;i<5;i++){
        printf("%d \n",*hold);
        hold++;
    }
}