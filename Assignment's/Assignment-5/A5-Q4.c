#include<stdio.h>
#include<math.h>
int main(){
    int s;
    printf("Enter side of square =");
    scanf("%d",&s);
    int ans =pow(s,2);
    printf("Area of Square =%d",ans);
    return 0;
}