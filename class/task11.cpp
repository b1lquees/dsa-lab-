#include <iostream>
using namespace std;


void incMemory(int arr[], int size)
{
    int *p = arr;
    int *q = new int[10](); // initialise all 10 values to zero 
    for (int i = 0; i < size; i++)
    {
        q[i] = p[i];
    }
    cout << " q values: ";
    for (int i = 0; i < 10; i++)
    {
        cout << q[i] << " ";
    }
    cout << endl;
    // since p comes from the stack array we cannot delete it, we can only delete the memory allocated for q
    p = q;      // point p to the same location as q
    q = nullptr;
    cout << "p values: ";
    for (int i = 0; i < 10; i++)
    {
        cout << p[i] << " ";
    }
    cout << endl;
    delete [] p; // when ure finished using the array you have to release it 
    // otherwise the dynamically allocated memory remains allocated after main() finishes thats a memory leak 
}

int main()
{
    int *A = new int[5]{1, 2, 3, 4, 5};
    int *p = A;
    int *q = new int[10]();
    for (int i = 0; i < 5; i++)
    {
        q[i] = p[i];
    }
    cout << "q values: ";
    for (int i = 0; i < 10; i++)
    {
        cout << q[i] << " ";
    }
    cout << endl;
    delete[] p; // delete the memory allocated for p
    p = q;      // point p to the same location as q
    q = nullptr;
    cout << "p values: ";
    for (int i = 0; i < 10; i++)
    {
        cout << p[i] << " ";
    }
    cout << endl;
    delete[] p; // delete the memory allocated for q

    return 0;
}