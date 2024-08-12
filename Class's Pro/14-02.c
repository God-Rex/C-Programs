#include<stdio.h>
int main (){
    FILE *fp,*fp1;
    fp = fopen("testR.txt","w");
    if(fp == NULL)
    {
      printf("File not found");
      return 0;
    }
  /*
    fprintf(fp,"One");   
     fprintf(fp,"Two");  
    fprintf(fp,"Three");  
    fprintf(fp,"Four");*/
    fclose(fp);

}