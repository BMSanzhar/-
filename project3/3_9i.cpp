#include <iostream>//Подсчет чисел
using namespace std;
int main(){
    int n;
    cin>>n;
    int count1=0;
    int count2=0;
    int count3=0;
    for(int i=0; i<n; i++){
        int nums;
        cin>>nums;
        if(nums==0)
            count1++;
        
        if(nums>0)
        count2++;
        
        if(nums<0)
        count3++;
    }

   cout<<count1<<" "<<count2<<" "<<count3;
    return 0;
}