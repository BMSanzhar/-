#include <iostream>
using namespace std;
int main(){
    int n, num;
    cin>>n;
    num=n/10;
    if(num>9){
        num=num%10;
        
    }
    cout<<num<<endl;
    return 0;
}