#include <iostream>//Число десятков двузначного числа
using namespace std;
int main(){
    int n, num;
    cin>>n;
    num=n/10;
    if(num>9){
        num%10;
        
    }
    cout<<num<<endl;
    return 0;
}