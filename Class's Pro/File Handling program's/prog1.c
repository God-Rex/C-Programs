#include<stdio.h>
int main(){
    FILE *f1;
    int a,b,c;
    printf("Enter three integers\n");
    scanf("%d%d%d",&a,&b,&c);
    f1 = fopen("prog1.txt","w");
    if(f1 == NULL){
        printf("File not found");
        return 0;
    }
    fprintf(f1,"%d %d %d\n",a,b,c);
    fclose(f1);Ṇ
}