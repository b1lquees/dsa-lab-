#include <iostream>
using namespace std;
int main(){
    int n = 3;
    // dynamically allocate an array of 3 integers
    int *values = new int[n];
    // read the three integers
    for (int i = 0; i < n; i++){
        cin >> values[i];
    }
    // display all three integers
    cout << "Values: ";
    for (int i = 0; i < n; i++){
        cout << values[i] << " ";
    }
    cout << endl;
    // release the dynamically allocated array
    delete[] values;
    // reset pointer
    values = nullptr;
    return 0;
}