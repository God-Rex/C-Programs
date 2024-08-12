#include<stdio.h>
int main(){
    FILE *f1;
    f1 = fopen("prog2.txt","w");
    if(f1 ==NULL){
        printf("File is not found");
        return 0;
    }
    for(int i=1;i<=5;i++){
        int num;
        printf("Enter Number:");
        scanf("%d",&num);
        // putw(num,f1);
        fprintf(f1,"%d\n",num);
    }
    fclose(f1);
}