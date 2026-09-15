#include <iostream>
using namespace std;

int main(){
    int n ; 
    do {
        cout << "Enter number of students: ";
        cin >> n;
        if(n <= 0){
            cout << "Number of students should be greater than 0. " << endl;
        }
    } while (n <= 0);

    int* marks = new int[n];
    int total = 0;
    cout << "Enter marks between 0 to 100: ";
    for(int i = 0 ; i < n ; i++){
        cin >> *(marks + i);
    }
    // display
    // count marks greater than 50
    int count = 0;
    cout << "Marks : "; 
    for (int i = 0; i < n; i++)
    {
        cout << *(marks + i) << " ";
        total += *(marks + i) ;
        if(*(marks + i) >= 50){
            count++;
        }
    }
    cout << endl;
    double average = static_cast<double>(total)/ n ; 
    cout << "Average : " << average << endl;
    cout << "Numbers greater than or equal to 50: " << count << endl;
    delete[] marks;
    marks = nullptr;
    return 0;
}
