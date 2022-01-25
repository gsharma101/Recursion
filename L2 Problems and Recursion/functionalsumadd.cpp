#include <bits\stdc++.h>
// Program to find sum of first N numbers using parameter way
using namespace std;

int add(int n){
    // Base Case
    if( n == 0)
    {
        return 0;
    }
    // Recrance relation
   return n + add(n-1);
}

int main(){
    int n;
    cout<<"How many time you want to add\n";
    cin>>n;
    cout<<"\n"<<"The sum of all the numbers till "<<n<<" is "<<add(n);
    return 0;
}