#include <iostream>
using namespace std;
int main(){
    int n, even;
    cin>>n;
    even=n+2-(n%2);
    cout<<even;
    return 0;
}