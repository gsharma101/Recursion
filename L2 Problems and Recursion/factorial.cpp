#include <bits\stdc++.h>
// Program the factorial of the number
using namespace std;

int fact(int n){
    // Base Case
    if( n == 0)
    {
        return 1;
    }
    // Recrance relation
   return n * fact(n-1);
}

int main(){
    int n;
    cout<<"How many time you want to fact\n";
    cin>>n;
    cout<<"\n"<<"The factorial of all the numbers till "<<n<<" is "<<fact(n);
    return 0;
}