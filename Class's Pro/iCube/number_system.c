#include<stdio.h>
int main(){
    int x;
    while(x!=-1){
        scanf("%d",&x);
        for(int i=1;i<=x;i++){
            int ans;
            ans=i%10;
            printf("%d\n",ans);
        }
    }
    }
