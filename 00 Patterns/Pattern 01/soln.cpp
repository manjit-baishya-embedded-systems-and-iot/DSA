// ---------------------------
// Draw the follwoing pattern:
// *****
// *****
// *****
// *****
// *****
// ---------------------------

#include <iostream>
using namespace std;

int main() {
    int rows = 5;
    int cols = 5;

    for(int i=0; i<5; i++){
        for(int i=0; i<5; i++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}