#include <iostream>
using namespace std;

int main()
{
    int *p = new int[7]{1, 2, 3, 4, 5, 6, 7};

    for (int i = 0; i < 7; i++)
    {

        bool isPrime = true;

        if (p[i] < 2)
        {
            isPrime = false;
        }

        for (int j = 2; j < p[i]; j++)
        {
            if (p[i] % j == 0)
            {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
        {
            cout << p[i] << " ";
        }
    }

    cout << endl;

    delete[] p;
    return 0;
}