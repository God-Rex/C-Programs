#include<stdio.h>
int main(){
    int a,sum=0;
    for(;;){
        scanf("%d",&a);
        if(a==-1){
            break;
        }
        sum =sum+a;
        if(sum>a){
            printf("Sum = %d\n",sum);
            sum=a;
        }
    }
}