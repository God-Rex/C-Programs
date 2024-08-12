#include<stdio.h>
#include<stdlib.h>
void swap(int*,int*);
int main(){
    int input[5];
    int scount=0;
    for(int i=0;i<5;i++){
        scanf("%d",&input[i]);
    }
    for(int i=0;i<5;i++){
        if(input[i]>input[i+1]){
            swap(&input[i],&input[i+1]);
            scount++;
        }
    }
    if(scount==0){
        printf("Inpuut is already sorted\n");
        exit(0);
    }
    for(int i=0;i<;i++){

    }
    for(int i=0;i<5;i++){
        printf("%d\t",input[i]);
    }
}

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}