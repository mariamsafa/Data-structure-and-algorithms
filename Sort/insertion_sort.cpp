#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, key, j;
    cout << "Enter the size of the array: ";
    cin >> n;

    int A[n];
    cout << "Enter the elements of array: ";

    for (i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    // insertion sort
    for (j = 1; j < n; j++)
    {
        key = A[j];
        i = j - 1;

        while (i >= 0 && A[i] > key)
        {
            A[i + 1] = A[i];
            i = i - 1;
        }
        A[i + 1] = key;
    }

    cout << "The sorted elements: ";
    for (i = 0; i < n; i++)
        cout << A[i] << " ";
    cout << endl;

    return 0;
}
