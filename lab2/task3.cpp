#include <iostream>
using namespace std;

int main()
{
    int sales[2][3];
    // pointer to an array of 3 integers
    int (*rowPtr)[3] = sales;

    //cout << "Enter sales: " << endl;
    for (int r = 0; r < 2; r++){
        for (int c = 0; c < 3; c++){
            do{
                cout << "Enter Value: ";
                cin >> *(*(rowPtr + r) + c);
                if (*(*(rowPtr + r) + c) < 0){
                    cout << "Value cannot be negative. Please enter again." << endl;
                }
            } while (*(*(rowPtr + r) + c) < 0);
        }
    } cout << endl;
    // display the values
    cout << "Sales: " << endl;
    for (int r = 0; r < 2; r++){
        for (int c = 0; c < 3; c++){
            cout << *(*(rowPtr + r) + c) << "\t";
        }
        cout << endl;
    }cout << endl;
    // calculate total for each branch
    cout << "total for each branch: " << endl;
    for (int r = 0; r < 2; r++){
        int total = 0;
        for (int c = 0; c < 3; c++){
            total += *(*(rowPtr + r) + c);
        }
        cout << "branch " << r + 1 << ": " << total << endl;
    }
    // calculate total for each day
    cout << "\ntotal for each day: " << endl;
    // up to down
    for (int c = 0; c < 3; c++){
        int total = 0;
        for (int r = 0; r < 2; r++){
            total += *(*(rowPtr + r) + c);
        }
        cout << "day " << c + 1 << ": " << total << endl;
    }

    return 0;
}