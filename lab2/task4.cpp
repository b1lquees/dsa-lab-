#include <iostream>
using namespace std;

int main(){
    int rows, cols;
    do{
        cout << " enter no. of students: ";
        cin >> rows;
        if(rows <= 0){
            cout << "students must be greater than 0" <<endl;
        }
    }while(rows <= 0);
    do{
        cout << "enter no. of subjects: ";
        cin >> cols;
        if(cols <= 0)
            cout << "students must be greater 0" << endl;
    }while(cols <= 0);
    // allocate array of row pointers
    int **marks = new int*[rows];
    for(int r=0 ; r < rows ; r++){
        marks[r] = new int[cols];
    }
    // input marks 
    cout << "Enter marks: " << endl;
    for(int r = 0 ; r < rows; r++){
        cout << "Student " << r + 1 << ": " << endl;
        for(int c = 0; c < cols; c++){
            do{
                cout << "Subject " << c + 1 << ": ";
                cin >> *(*(marks + r) + c);
                if (*((*marks + r) + c) < 0 || *((*marks + r) + c) > 100){
                    cout << "marks must be between 0 and 100" << endl;
                }
            }while (*(*(marks + r) + c) < 0 || *(*(marks + r) + c) > 100);
        }
    }
    cout << "\n\nMarks Matrix:\n";
    for (int r = 0; r < rows; r++){
        for (int c = 0; c < cols; c++){
            cout << *(*(marks + r) + c) << "\t";
        }
        cout << endl;
    }
    // find student w highest marks and the highest marks
    int highestTotal = -1;
    int highestStudent = 0 ;
    cout << "Student Total : " << endl;
    for(int r = 0 ; r < rows ; r++){
        int total = 0;
        for(int c = 0 ; c < cols ; c++){
            total += marks[r][c];
        }
        // > means first student wins if totals tie
        if(total > highestTotal){
            highestTotal = total;
            highestStudent = r + 1;
        }
    } cout << "Student: " << highestStudent << " Marks: " << highestTotal << endl;

    // deallocate memory
    for(int r = 0 ; r < rows ; r++){
        delete[] marks[r];
    }
    delete[] marks;
    marks = nullptr;
    cout << "memory deallocated" << endl;
    return 0;
}