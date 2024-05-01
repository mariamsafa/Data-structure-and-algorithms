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