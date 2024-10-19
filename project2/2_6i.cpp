#include <iostream>//Ладья
using namespace std;
int main(){
    int a, b; //Бірінші фигурка
    int c, d; //Екінші фигурка
    cin>>a>>b>>c>>d;
    if(a>8 || b>8 || c>8 || d>8){
        cout<<"NO";
        return 1;
    }
    if(a==c || b==d){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}