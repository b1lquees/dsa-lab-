#include <iostream>
using namespace std;

class Box {
    public:
        // A data member is a variable declared inside a class that stores a specific property or state for an object in object-oriented programming.
        int length; // data member
        void show()
        { // member function
            cout << "length: " << length << "\n";
        }
};

int main(){
    Box b; // box is class b is object 
    b.length = 4; // accesses object members
    b.show();
    //return 0;
}