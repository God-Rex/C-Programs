#include<stdio.h>
int main(){
    int A[5],B[5],Sum[5],i,n=1;
    int *P =A,*T =B,*R =Sum;

    for(i=0;i<5;i++){
        printf("Enter values A[%d] & B[%d]\n",n,n);
        scanf("%d%d",P,T);
        P++,T++,n++;
        
    }

P =A,T =B,R =Sum;



    for(i=0;i<5;i++){
        *R =*P +*T;
        R++,P++,T++;
       
    }

P =A,T =B,R =Sum,n=1;

    for(i=0;i<5;i++){
        printf("SUM of A[%d] & B[%d] = %d\n",n,n,*R);
        R++,n++;
    }

}