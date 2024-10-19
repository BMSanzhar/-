#include <iostream>//Четные числа
using namespace std;
int main(){
    int n, s;
    int c;
    cin>>n>>s;
    if(n%2 !=0){
        n=n+1;
    }
    for(int i=n; i<=s;i=i+2){
        cout<<i<<" ";
    }
    return 0;
}