#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    
    int size;
    cin>>size;
    vector<int>v;
    for (int i = 0; i < size; i++) {
        int m ;
        cin>>m;
        v.push_back(m);
    }
    int idx,max=0;
    for(int i=1; i<6;i++){
        int val=count(v.begin(),v.end(),i);
        if(max<val){
            max=val;
            idx=i;
        }
    }
    cout<< idx;
    return 0;
}