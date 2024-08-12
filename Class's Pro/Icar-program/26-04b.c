#include<stdio.h>
struct student{
    int roll;
    char name[100];
    int year;
    char cat[10];
    
} s[10];
int main(){
    int i;
    for(i=0;i<2;i++){
        printf("Enter Roll No. =");
        scanf("%d",&s[i].roll);
        printf("Enter Name =");
        scanf("%s",s[i].name);
        printf("Enter Year =");
        scanf("%d",&s[i].year);
        printf("Enter Category =");
        scanf("%s",&s[i].cat);
        printf("\n\n");
    }
     FILE *f1;
    f1 = fopen("Data of student.txt","a");
    if(f1 ==NULL){
        printf("File is not found");
        return 0;
    }
   
   

    for(i=0;i<2;i++){
        fprintf(f1,"Roll No. = %d\n",s[i].roll);
        fprintf(f1,"Name = %s\n",s[i].name);
        fprintf(f1,"Admission Year = %d\n",s[i].year);
        fprintf(f1,"Catagory = %s\n",s[i].cat);
        fprintf(f1,"\n\n");
    }
    fclose(f1);
}
