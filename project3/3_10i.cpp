#include <iostream>//Нули
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=0;
    for(int i=0; i<n; i++){
        int nums;
        cin>>nums;
        if(nums==0){
            count++;
        }
    }
    cout<<count;
    return 0;
}