#include <iostream>
using namespace std;

void evenNumbers(int arr[], int size){
    for (int i = 0; i < size; i++){
        if (arr[i] % 2 == 0){
            cout << arr[i] << " ";
        }
    }
    cout<< endl;
}
void addresses(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << &arr[i] << endl;
    }
}
void minElement(int arr[], int size){
    int minE = INT_MAX;
    for(int i = 0 ; i < size ; i++){
        if(arr[i] < minE){
            minE = arr[i];
        }
    }
    cout << "Min element: " << minE  << endl;
}

void maxElement(int arr[], int size)
{
    int maxE = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > maxE)
        {
            maxE = arr[i];
        }
    }
    cout << "MAX element: " << maxE << endl;
}
int main(){
    int A[5] = {1,2,3,4,5};
    //evenNumbers(A, 5);
    //addresses(A, 5);
    //maxElement(A, 5);
    //minElement(A,5);
    //incMemory(A, 5);
    return 0;
}