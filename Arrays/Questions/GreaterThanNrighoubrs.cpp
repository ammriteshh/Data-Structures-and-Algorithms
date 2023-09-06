//print the elements of an array which are greater than its neighoubrs and its print its Reverse

#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 3, 2, 4, 6, 8, 5};

    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++) 
    {
        if (arr[i] > arr[i-1] && arr[i] > arr[i+1]) {
            cout << arr[i] << " "<<endl;
        }
    }

    for (int i = 0; i < n / 2; i++)
        swap(arr[i], arr[n - i - 1]);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";


    return 0;
}

