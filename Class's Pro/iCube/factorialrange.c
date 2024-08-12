#include<stdio.h>
int main(){
    int a=1,b,c;
    int count=0,sum=0;
    int low,high;
    scanf("%d %d",&low,&high);
    for(b=1;b<=100;b++){
        c=a*b;
        if(low<=c && c<=high){
            printf("%d\n",c);
            count++;
            sum=sum+c;
        }
        a=c;
    }
    printf("\nCount = %d",count);
    printf("\nSum = %d",sum);
}