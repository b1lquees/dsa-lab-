// Create an array named numbers containing 2, 4, 6, 8 and 10.
// Change the third element to 7. Use a for loop to display all five values, separated by spaces.
//Predict the output before running your program.

#include<iostream>
using namespace std;

class Solution {
    public:
        int numbers[5] = {2,4,6,8,10};
        int elementNum;
        int value;
        void changeElement(int x , int y){
            numbers[x] = y;
        }
        void printelement()
        {
            cout << "Output: " ;
            for (int i = 0; i < size(numbers); i++)
            {
                cout << numbers[i] << " ";
            }
        }
};
int main(){
    Solution s;
    s.elementNum = 3;
    s.value = 7;
    s.changeElement(s.elementNum, s.value);

    s.printelement();

    return 0;
}
