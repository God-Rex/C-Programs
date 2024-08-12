#include<stdio.h>
int main(){
    int x,y;
    printf("Enter two number : ");
    scanf("%d%d",&x,&y);
    if(x>y){
        printf("%d is greter than %d",x,y);
    }
    else{
        printf("%d is greter than %d",y,x);
    }
}