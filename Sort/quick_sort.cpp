#include <bits/stdc++.h>
using namespace std;

int partition(int arr[],int low,int high)
{
  int i=low;
  int j=high;
  int pivot=arr[low];
  while(i<j){
    while(arr[i]<=pivot){
        i++;
    }

    while(arr[j]>pivot){
        j--;
    }

    if(i<j){
        swap(arr[i],arr[j]);
    }

  }
  swap(arr[low],arr[j]);
  return j;

}



void quicksort(int arr[],int low,int high)
{
    if(low<high){
        int part=partition(arr,low,high);
        quicksort(arr,low,part-1);
        quicksort(arr,part+1,high);
    }
}


int main(){

int n;
cin>>n;
int arr[n];
for(int i=0; i<n;i++)
{
    cin>>arr[i];
}

quicksort(arr,0,n-1);

for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
return 0;



}