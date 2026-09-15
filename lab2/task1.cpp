#include<iostream>
using namespace std;

int main(){
    int sales[5];
    int *p = sales; // pointer to an integer  sales represents the addrrss of the first element in most expressions
    int total = 0;

    cout << "Enter sales for  days: " ;
    for(int i=0; i < 5; i++){
        cin >> *(p + i) ; 
    }
    cout << endl;
    cout << "Sales: ";
    for(int i = 0; i < 5 ; i++){
        cout << *(p + i) << " ";
        total += *(p + i);
    }
    cout << "Total sales: " << total << endl;
    cout << endl; 
    cout << "P points to: " << *p << endl;
    // 2. Add 2 to the third day’s value through the pointer.Display the updated values and updated total.
    *(p+2) = 2;
    cout << "Values: ";
    for(int i = 0; i < 5 ; i++){
        cout << *(p + i) << " " ;
    }
    cout << endl;

    // Explain p, &p, *p and *(p + 2).State the valid indices and explain why *(p + 5) cannot be used to read an element.
    cout << "p  is a variable and variables have adddresss and &p is the address of the pointer variable p. " << endl;
    cout << "* is the derefence operator. It's used to go the address of the pointer p and get the value there. " << endl;
    cout << "*(p+2) moves two integer positions forward " << endl;
    cout << "Valid Indices are 0 1 2 3 4 so they'll  be sales[0] sales[1] sales[2] sales[3] sales[4] " << endl; 
    cout << "and if we use pointer notation *(p + 0), *(p + 1), *(p + 2), *(p + 3), *(p + 4) are valid. " << endl;
    cout << "p + 5 represents the address one position past the end of the array but *(p + 5) cannot" << endl;
    cout << "be used to read a value because there is no element at index 5 and dereferencing it will" << endl;
    cout << "result in undefined behavior.";
    return 0;
}
