#include <iostream>//Сумма чисел
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    for(int i=0; i<n; i++){
        int num;
        cin>>num;
        sum += num;
    }
    cout<<sum;

    return 0;
}