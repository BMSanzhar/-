#include <iostream>//Количества равных из трех
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int count=0;
    if(a==b && b==c){
        cout<<"3";
    }
    else if(a==b || b==c || a==c){
        cout<<"2";
    }
    else{
        cout<<"0";
    }
    return 0;
}