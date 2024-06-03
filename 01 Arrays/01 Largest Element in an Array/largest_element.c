#include<stdio.h>

int main(){

    // defining the array
    int arr[5] = {59,82,76,56,29};

    // variable to store the max value
    int max = arr[0];

    for(int i = 1; i < 5; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    // printing the largest element
    printf("Max number is: %d", max);
}