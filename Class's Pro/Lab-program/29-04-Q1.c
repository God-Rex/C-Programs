#include<stdio.h>
int main(){
    int x[5],i,pcount=0,ncount=0;
    printf("Enter 5 number:\n");
    for(i=0;i<5;i++){
        scanf("%d",&x[i]);
    }
    for(i=0;i<5;i++){
        if(x[i]>0){
            pcount++;
        }
        else{
            ncount++;
        }
    }
    printf("Positive intiger = %d\n",pcount);
    printf("Negative intiger = %d",ncount);
}