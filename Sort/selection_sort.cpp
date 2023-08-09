#include <bits/stdc++.h>
using namespace std;

void selectionSort(int data[], int size)
{
    for (int s = 0; s < size - 1; s++)
    {
        int minimum = s;
        for (int i = s + 1; i < size; i++)
        {
            if(data[i]<data[minimum])
            {
                minimum=i;
            }
        }

            int temp=data[s];
            data[s]=data[minimum];
            data[minimum]=temp;

    }
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++)

    {
        cin >> A[i];
    }
    selectionSort(A, n);
    cout << "Sorted array : ";
    for (int i = 0; i < n; i++) {
    cout << A[i] << " ";

  }
  cout<<endl;

}
