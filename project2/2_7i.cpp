#include <iostream>//Ход короля
using namespace std;
int main(){
    int n, m;
    int s, t;
    cin>>n>>m>>s>>t;
    if(abs(n-s)<=1 && abs(m-t)<=1){    
        cout<<"YES";
        
    }
    else{
        cout<<"NO";
    }

    return 0;
}