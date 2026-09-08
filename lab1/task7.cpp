#include <iostream>
using namespace std;

class Solution
{
public:
    int numbers[10];
    int count = 0;
    int n = size(numbers);

    void InsertElement()
    {
        cout << "Input 10 integers into this array: ";
        for (int i = 0; i < n; i++)
        {
            cin >> numbers[i];
        }
    }
    void uniqueOrder(){
        for (int i = 0; i < n; i++){
            bool present = false;
            // we need to check if the current no. is already present in the front region of the array
            for (int j = 0; j < count; j++){
                if (numbers[j] == numbers[i]){
                    present = true;
                    break;
                }
            }
            // if it is not present increase the count and place it in the front region of the array
            if (!present){
                numbers[count] = numbers[i]; // place at front region
                count++;
            }
        }
    }
    void display(){
        for (int i = 0; i < count; i++){
            cout << numbers[i] << " ";
        }
        cout << endl;
        cout << "Count = " << count;
    }
};
int main()
{
    Solution s;
    s.InsertElement();
    s.uniqueOrder();
    s.display();
}