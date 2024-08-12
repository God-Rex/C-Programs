#include<stdio.h>
int two(int);
int three(int);
int main(){
    int t;
    scanf("%d",&t);
    if(t==2){
        int ans =two(t);
        if(ans==1){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    if(t==3){
        int ans =three(t);
        if(ans==1){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
}

int two(int n){
    int mat[n][n];
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&mat[i][j]);
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            // Upper matrix
            if(mat[i][j]==0 && i>j){
                count++;
                if(count<n){
                    return 1;
                }
            }
            // Lower matrix
            else if(mat[i][j]==0 && i<j){
                count++;
                if(count<n){
                    return 1;
                }
            }
        }
    }
    if(count==0){
        return 0;
    }
}

int three(int n){
    int mat[n][n];
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&mat[i][j]);
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
                 // Upper matrix
            if(mat[i][j]==0 && i>j){
                count++;
                if(count==n){
                    return 1;
                }
            }
            // Lower matrix
            else if(mat[i][j]==0 && i<j){
                count++;
                if(count==n){
                    return 1;
                }
            }
        }
    }
    if(count!=n){
        return 0;
    }
}