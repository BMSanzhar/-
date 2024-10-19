#include <iostream>//Какое из чисел больше?
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    if(n>m){
        cout<<"1"<<endl;
    }
    else if(n<m){
        cout<<"2\n";
    }
    else{
        cout<<"0";
    }
    
    return 0;
}