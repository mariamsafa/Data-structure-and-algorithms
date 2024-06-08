#include <bits/stdc++.h>
using namespace std;
void max_heap(int arr[],int i,int n);

void arra(int arr[],int n)
{
    for (int i = 1; i <=n ; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
void lastparent(int arr[],int n){
    for(int i=n/2;i>=1;i--){
        max_heap(arr,i,n);
    }
}


void max_heap(int arr[], int i, int n)
{
    int left=2*i;
    int right=2*i+1;
    int largest;
    if(left<=n && arr[left]>arr[i]){
        largest=left;
    }
    else{
        largest=i;
    }
    if(right<=n && arr[right]>arr[largest]){
        largest=right;
    }
    if(largest!=i){
        swap(arr[i],arr[largest]);
        max_heap(arr,largest,n);
    }
}


int main(){
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
   {
    cin>>arr[i];
   }
   lastparent(arr,n);
   arra(arr,n);

   
}





// #include <iostream>
// using namespace std;

// void heapify(int arr[], int n, int i)
// {
//     int largest = i; 
//     int l = 2 * i + 1; 
//     int r = 2 * i + 2;
 
//     if (l < n && arr[l] > arr[largest])
//         largest = l;
 
//     if (r < n && arr[r] > arr[largest])
//         largest = r;
 
//     if (largest != i) {
//        int temp=arr[i];
//         arr[i]=arr[largest];
//         arr[largest]=temp;
 
//         heapify(arr, n, largest);
//     }
// }
 
// void heapSort(int arr[], int n)
// {
    
//     for (int i = n / 2 - 1; i >= 0; i--)
//         heapify(arr, n, i);
 
//     for (int i = n - 1; i >= 0; i--) {
    
//         int temp=arr[0];
//         arr[0]=arr[i];
//         arr[i]=temp;
      
 
//         heapify(arr, i, 0);
//     }
// }
 

// void printArray(int arr[], int n)
// {
//     for (int i = 0; i < n; ++i)
//         cout << arr[i] << " ";
//     cout << "\n";
// }
 
// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//      for(int i=n/2 -1;i>=0;i--){
//        heapify(arr,n,i);
//    }
   
//     heapSort(arr, n);
 
//     cout << "Sorted array is \n";
//     printArray(arr, n);
     
//   return 0;
// }
