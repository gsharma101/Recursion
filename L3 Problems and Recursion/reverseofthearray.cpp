#include <bits\stdc++.h>
// Program to reverse the array elements
using namespace std;

void reverse(int i, int arr[], int n){
    // Base Case
    if( i >= n/2)
    {
        return ;
    }
    swap(arr[i], arr[n-i-1]);
    // Recrance relation
    reverse(i+1, arr , n);  
}

int main(){
    int n;
    cout<<"Enter the elements of the array\n";
    cin>>n;
    int array[n];
    cout<<"Enter the element of the array\n";
    for(int i = 0; i < n;  ++i)
    {
        cin>>array[i];
    }
    reverse(0,array,n);
    cout<<"The reverse array is\n";
    for(int i = 0; i<n; ++i)
    {
        cout<<array[i];
    }
}