#include<stdio.h>
int liner(int num[],int find,int n);
int main(){
    int n;
    scanf("%d",&n);
    int num[n];
    for(int i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    int find;
    scanf("%d",&find);
    int fun =liner(num,find,n);
    if(fun!=-1){
        printf("%d found at %d position\n",find,fun+1);
    }
    else{
            printf("%d not found\n",find);
        }
}
int liner(int num[],int find,int n){

    for(int i=0;i<n;i++){
        if(num[i]==find){
            return i;
        }
        
    }
    return -1;
}