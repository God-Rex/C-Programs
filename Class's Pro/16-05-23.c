#include<stdio.h>
struct data
{
    int n;
    char a;
}s[5];

int main(){
    struct data
    int i;
    for(i=0;i<5;i++){
        scanf("%d",&s[i].n);
        scanf("%c",&s[i].a);
    }
    for(i=0;i<5;i++){
        printf("%d",s[i].n);
        printf("%c",s[i].a);
    }
}//incomplete