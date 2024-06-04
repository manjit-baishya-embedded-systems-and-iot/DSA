// Given two arrays: a1[0..n-1] of size n and a2[0..m-1] of size m, 
// where both arrays may contain duplicate elements. The task is to 
// determine whether array a2 is a subset of array a1. It's important 
// to note that both arrays can be sorted or unsorted. Additionally, 
// each occurrence of a duplicate element within an array is considered 
// as a separate element of the set.

#include<stdio.h>

int main(){
    int a1[8] = {11, 7, 1, 13, 21, 3, 7, 3};
    int a2[5] = {11, 3, 7, 1, 7};
    int count = 0;

    for(int i=0; i<sizeof(a2); i++){
        for(int j=0; j<sizeof(a1); j++){
            if(a1[i] == a2[j]){
                count++;
                break;
            }
        }
    }

    if(count == sizeof(a2)){
        printf("A2 is a subset of A1");
    }
    else{
        printf("A2 is not a subset of A1");
    }
}