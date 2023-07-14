#include <iostream>

using namespace std;

int main()
{
    int n = 4;
    int arr[n] = {4, 7, 5, 3};

    cout << "The Given Array is : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    int key;
    cout << "\nEnter the Key : ";
    cin >> key;

    for (int i = 0; i < n; i++)
    {

        if (arr[i] == key)
        {
            cout << "The Key is present at index : " << i;
        }
    }
}