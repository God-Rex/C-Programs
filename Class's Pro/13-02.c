#include<stdio.h>
int main (){
    FILE *fp,*fp1;
    fp = fopen("testR.txt","w+");
    if(fp == NULL)
    {
      printf("File not found");
      return 0;
    }
   // printf("HEllo World");
    fprintf(fp,"Test line\n");
    //  fprintf(fp,"Today is monday\n");
    // fprintf(fp,"Tommorow is tuesday\n");
    fclose(fp);
  // fp1 = fopen("D:\\C-Programing\\Class's Pro\\output.txt\\","r");

}