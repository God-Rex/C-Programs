#include<stdio.h>
int main(){
     int amt,count=0,total=0;
    scanf("%d",&amt);
    while(amt){
        if(amt>=500){
            while(amt>=500){
            amt =amt-500;
            count++;
            total++;
        }
        printf("500 X %d\n",count);
        count=0;
        }
        else if(amt>=200){
            while(amt>=200){
            amt =amt-200;
            count++;
            total++;
        }
        printf("200 X %d\n",count);
        count=0;
        }
        else if(amt>=100){
            while(amt>=100){
            amt =amt-100;
            count++;
            total++;
        }
        printf("100 X %d\n",count);
        count=0;
        }
        else if(amt>=50){
            while(amt>=50){
            amt =amt-50;
            count++;
            total++;
        }
        printf("50 X %d\n",count);
        count=0;
        }
        else if(amt>=20){
            while(amt>=20){
            amt =amt-20;
            count++;
            total++;
        }
        printf("20 X %d\n",count);
        count=0;
        }
        else if(amt>=10){
            while(amt>=10){
            amt =amt-10;
            count++;
            total++;
        }
        printf("10 X %d\n",count);
        count=0;
        }
        else if(amt>=5){
            while(amt>=5){
            amt =amt-5;
            count++;
            total++;
        }
        printf("5 X %d\n",count);
        count=0;
        }
        else if(amt>=2){
            while(amt>=2){
            amt =amt-2;
            count++;
            total++;
        }
        printf("2 X %d\n",count);
        count=0;
        }
        else if(amt>=1){
            while(amt>=1){
            amt =amt-1;
            count++;
            
        }
        printf("1 X %d\n",count);
        count=0;
        total++;
        }
    }
    printf("\nTotal Count = %d",total);
}