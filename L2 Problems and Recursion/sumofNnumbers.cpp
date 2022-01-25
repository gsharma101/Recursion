#include <bits\stdc++.h>
// Program to find sum of first N numbers using parameter way
using namespace std;

void name(int i, int sum){
    // Base Case
    if(i < 1)
    {
        cout<<sum;
        return ;
    }
    // Recrance relation
    name(i-1, sum + i);
}

int main(){
    int n;
    cout<<"How many time you want to add\n";
    cin>>n;
    name(n,0);
    return 0;
}