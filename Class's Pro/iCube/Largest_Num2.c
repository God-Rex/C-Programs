#include<stdio.h>
int main(){
    int arr[]={27,39,43,9,82,10};
    int frq[10]={0};
    for(int i=0;i<6;i++){
        while(arr[i]){
            frq[arr[i]%10]++;
            arr[i]/=10;
        }
    }
    for(int i=9;i>=0;i--){
        while(frq[i]){
            printf("%d\t",i);
            frq[i]--;
        }
    }
}