#include<iostream>
using namespace std;

int main() { 
    int values[3] = {5,10,15};
    cout << values[0] << endl;
    values[1] = 12;
    for(int i =0 ; i < size(values) ; i++){
        cout << values[i] << " " ;
    }
    return 0;
}