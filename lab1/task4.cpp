//Read 8 integers into an array.Find and display the largest and smallest values and their indices.
//If a value occurs more than once, report its first occurrence.
#include <iostream>
using namespace std;

class Solution // 1 2 3 4 
{
public:
    int numbers[8];
    int largestElement = INT_MIN; // INT_MIN is used initially so that any integer can be larger than it.
    int largestIndex = 0;
    int smallestIndex = 0;
    int smallestElement = INT_MAX; // INT_MAX is used initially so that any integer can be smaller than it.
    void InsertElement()
    {
        cout << "Input 8 integers into this array: ";
        // loop 1 to read 5 integers into the array
        for (int i = 0; i < size(numbers); i++)
        {
            cin >> numbers[i];
        }
    }
    void largestNSmallestElement(){

        int i = 0;
        for(i = 0; i < size(numbers) ; i++){
            // check if the current element is greater than the largestElement if yes then update largestElement and its index
            if(numbers[i] > largestElement){
                largestElement = numbers[i];
                largestIndex = i;
            }
            // check if the current element is smaller than the smallestElement if yes then update smallestElement and its index
            if(numbers[i] < smallestElement){
                smallestElement = numbers[i];
                smallestIndex = i;
            }
        }
        // display the elements and their index position
        cout << "Largest Element: " << largestElement << " Index position: " << largestIndex << endl;
        cout << "Smallest Element: " << smallestElement << " Index position: " << smallestIndex << endl;
    }
};
int main()
{
    Solution s;     
    s.InsertElement(); // accesses object functions takes input from the user
    s.largestNSmallestElement(); // finds and displays

    return 0;
}