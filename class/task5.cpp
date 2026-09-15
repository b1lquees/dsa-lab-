#include <iostream>
using namespace std;
int main(){
    int rows = 3;
    int cols = 4;
    int ** p = new int*[rows];
    for(int i = 0; i < rows ; i++){
        p[i] = new int[cols];
    }
    cout << "add values: " ;
    for(int i = 0; i < rows ; i++){
        for(int j=0; j < cols ; j++){
            cin >> p[i][j] ;
        }
    }
    cout << "array: " << endl;
    for(int i = 0; i < rows; i++){
        for(int j =0; j < cols; j++){
            cout << p[i][j] << " ";
        } cout << endl;
    }
    // free memory
    for(int i=0; i< rows ; i++){
        delete[] p[i];
    }
    delete[] p;
    return 0;
}