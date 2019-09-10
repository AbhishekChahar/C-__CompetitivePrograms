#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

int main(){
    
    int size;
    cin>>size;
    vector<int> v;
    for (int i = 0; i < size; i++) {
        int m ;
        cin>>m;
        v.push_back(m);
    }
    
    for (int i = 0; i < size; i++) {
        if(v[i]%5>2 &&  v[i] >= 38){
            v[i]=v[i]+abs((v[i]%5)-5);
        }
    }
    
    for (auto i : v) {
        cout<<i<<endl;
    }
    
    return 0;
}