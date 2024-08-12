#include<stdio.h>
int main(){
    FILE*f1;
    f1 =fopen("prog2.txt","r");
    if(f1 ==NULL){
        printf("File is not find");
        return 0;
    }
    int num;
    int sum =0;
    while((num =getw(f1) != EOF)){
        printf("Number is get : %d\n",num);
        sum +=num;
    }
    printf("Sum of integer : %d",sum);
    fclose(f1);
}