// Reverse the elements without using another array, 
// then display the updated array.Example : {3, 7, 2, 9, 4, 1} becomes{1, 4, 9, 2, 7, 3}.

#include <iostream>
using namespace std;
class Solution
{
public:
    int numbers[6];
    void InsertElement()
    {
        cout << "Input 6 integers into this array: ";
        // loop  to read 6 integers into the array
        for (int i = 0; i < size(numbers); i++)
        {
            cin >> numbers[i];
        }
    }
    void reverseArray(){
        int n = size(numbers);
        // divide the array in 2 
        for(int i = 0 ; i < n/2; i++){
            int temp = numbers[i];
            numbers[i] = numbers[ n - i - 1];
            numbers[n - i - 1] = temp;
        } 
    }
    void display(){
        for(int i = 0; i < size(numbers) ; i++){
            cout << numbers[i] << " ";
        }
    }
};

int main(){
    Solution s;
    s.InsertElement();
    s.reverseArray();
    s.display();

}
