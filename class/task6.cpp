#include <iostream>
using namespace std;

int main(){
    int rows, cols;
    cout << "enter no. of rows: ";
    cin >> rows;
    cout << "enter no of cols: ";
    cin >> cols;
    int ** table = new int*[rows];
    for(int i=0; i < rows; i++){
        table[i] = new int[cols];
    }
    cout << "enter table values: " << endl;
    for(int i=0; i < rows; i++){
        for(int j =0; j < cols; j++){
            cin >> table[i][j];
        }
    }
    // assume first element is both smallest and largest
    int smallest = table[0][0];
    int largest = table[0][0];
    for(int i =0; i< rows; i++){
        for(int j =0 ; j< cols; j++){
            if(table[i][j] < smallest){
                smallest = table[i][j];
            }
            if(table[i][j] > largest){
                largest = table[i][j];
            }
        }
    }

    //display
    cout << "table: " << endl;
    for(int i = 0; i< rows; i++){
        for(int j = 0; j < cols; j++){
            cout << table[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "\nSmallest value: " << smallest << endl;
    cout << "Largest value: " << largest << endl;
    // free memory
    for(int i=0; i < rows; i++){
        delete[] table[i];
    }
    delete[] table;
    return 0;
}