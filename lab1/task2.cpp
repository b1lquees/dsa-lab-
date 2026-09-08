// Declare int numbers[5]; and initialise int total = 0;.
// Use one loop to read five integers into the array and a second loop
// to add them to total. Display the total. Assume the user enters exactly five valid
// integers whose sum fits in int.

#include <iostream>
using namespace std;

class Solution
{
public:
    int numbers[5];
    int total = 0;
    void addElement(){
        cout << "Input 5 integers into this array: ";
        // loop 1 to read 5 integers into the array
        for(int i=0; i < size(numbers) ; i++){
            cin >> numbers[i] ;
        }
        // loop 2 to add the numbers 
        for(int j = 0; j< size(numbers) ; j++){
            total += numbers[j];
        }
    }
};
int main()
{
    Solution s; // 
    s.addElement(); // accesses object functions
    cout << "Total = " << s.total;

    return 0;
}