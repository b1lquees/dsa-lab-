#include <iostream>
using namespace std;

int main()
{
    int n;
    // read and validate n
    do{
        cout << "Enter n (1-10): ";
        cin >> n;
        if (n < 1 || n > 10){
            cout << "Enter n again." << endl;
        }
    } while (n < 1 || n > 10);
    // allocate original block
    int *marks = new int[n];
    // input original marks using pointer notation
    cout << "Enter " << n << " marks: ";
    for (int i = 0; i < n; i++){
        cin >> *(marks + i);
    }
    // allocate second block with space for one more mark
    int *newMarks = new int[n + 1];
    // copy original n values using pointer notation
    for (int i = 0; i < n; i++){
        *(newMarks + i) = *(marks + i);
    }
    // read new student's mark into final position
    cout << "Enter new mark: ";
    cin >> *(newMarks + n);
    // release old block
    delete[] marks;
    // make original pointer refer to new block
    marks = newMarks;
    // update stored size
    n = n + 1;
    // newMarks is no longer needed
    newMarks = nullptr;
    // display all values
    cout << "Values: ";
    for (int i = 0; i < n; i++){
        cout << *(marks + i) << " ";
    }
    cout << endl;
    // release final block exactly once
    delete[] marks;
    marks = nullptr;
    return 0;
}