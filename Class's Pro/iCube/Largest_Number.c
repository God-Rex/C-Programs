#include<stdio.h>

void selectionSort(int arr[],int);
void swap(int*,int*);
int main(){
    
    int arr[] ={277,399,473,9,829,10};
    int n=6,j,count=0;
    int stor[50];
    for(int i=0;i<6;i++){
        // for(j=arr[i];j!=0;j=j/10){
        //     stor[count]=j%10;
        // // printf("%d    ",stor[g]);
        //     count++;
        //    // stor[j]=arr[i]%10;
        // }
        j=arr[i];
        while(j!=0){

        stor[count]=j%10;
        // printf("%d\t",stor[count]);
        count++;
        j/=10;
        }
    }
    selectionSort(stor,count);

    for(int i=0;i<count;i++){
        printf("%d\t",stor[i]);
    }
    
    
}
void selectionSort(int arr[], int n) {
    int i, j, minIdx, temp;

    // Iterate through the entire array
    for (i = 0; i < n - 1; i++) {
        // Assume the current element is the minimum
        minIdx = i;

        // Find the index of the minimum element in the unsorted part of the array
        for (j = i + 1; j < n; j++) {
            if (arr[j] > arr[minIdx]) {
                minIdx = j;
            }
        }

        // Swap the minimum element with the first element in the unsorted part
        swap(&arr[i],&arr[minIdx]);
    }
}

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

