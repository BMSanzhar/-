#include <iostream>//Максимум из двух чисел
using namespace std;
int main(){
    int n, m;
    cin>>n>>m;
    if(n>m){
        cout<<n<<endl;
    }
    else if(m>n){
        cout<<m<<endl;
    }
    else{
        cout<<n<<endl;
    }
    return 0;
}