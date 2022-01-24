#include <bits\stdc++.h>
// Program to print numbers from 1 to N
using namespace std;

void name(int n){
    // Base Case
    if(n == 0)
        return ;
    
    // Recrance relation
    name(n-1);// Recrance relation
    cout<<n<<"\n";
}

int main(){
    int n;
    cout<<"How many numbers you want to print\n";
    cin>>n;
    name(n);
    return 0;
}