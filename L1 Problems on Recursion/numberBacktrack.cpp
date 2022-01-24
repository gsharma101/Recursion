#include <bits\stdc++.h>
// Program to print your name n times using recursion
using namespace std;

void name(int n){
    // Base Case
    if(n == 0)
        return ;
    
    // Recrance relation
    cout<<n<<"\n";
    name(n-1);
}

int main(){
    int n;
    cout<<"How many time you want to print your name\n";
    cin>>n;
    name(n);
    return 0;
}