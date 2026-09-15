#include <iostream>
using namespace std;

int main(){
    int i, j;
    int A[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    for(i=0; i < 3 ; i++){
        for(j=0; j < 4 ; j++){
            cout << A[i][j] << " ";
        } cout << endl;
    }
    int *B[3];
    B[0] = new int[4]{1,2,3,4};
    B[1] = new int[4]{5,6,7,8};
    B[2] = new int[4]{9,10,11,12};

    return 0;
}