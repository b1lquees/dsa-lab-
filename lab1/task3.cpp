#include <iostream>
using namespace std;
class Student { 
    public:
        int rollNumber;
        int marks;

        void display(int rollNumberarg , int marksarg){
            cout << "Roll Number: " << rollNumberarg << endl;
            cout << "Marks: " << marksarg << endl ;
        }
};

int main(){
    // declaring two objects of Student class
    Student s1;
    Student s2;
    // initiating the values of rollNumber and marks for both objects
    s1.rollNumber = 1;
    s1.marks = 75;
    s2.rollNumber = 2;
    s2.marks = 90;
    // displaying the values of rollNumber and marks for both objects
    s1.display(s1.rollNumber, s1.marks);
    s2.display(s2.rollNumber, s2.marks);

    cout << "Changing s1 marks to 80 " <<endl;
    s1.marks = 80;
    s1.display(s1.rollNumber, s1.marks);
    s2.display(s2.rollNumber, s2.marks);
}