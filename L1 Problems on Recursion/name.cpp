#include <bits\stdc++.h>
// Program to print your name n times using recursion
using namespace std;

void name(int i, int n){
    // Base Case
    if(i > n)
        return ;
    
    cout<<"Gaurav\n";
    // Recrance relation
    name(i+1,n);
}

int main(){
    int n;
    cout<<"How many time you want to print your name\n";
    cin>>n;
    name(1,n);
    return 0;
}