// ---------------------------
// Draw the follwoing pattern:
// *****
// *****
// *****
// *****
// *****
// ---------------------------

#include <stdio.h>

int main() {
    int rows = 5;
    int cols = 5;

    for(int i=0; i<5; i++){
        for(int i=0; i<5; i++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}