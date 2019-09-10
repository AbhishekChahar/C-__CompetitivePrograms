#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    int size;
    cin>>size;
    vector<char>v;
    for (int i = 0; i < size; i++) {
        char m ;
        cin>>m;
        v.push_back(m);
    }
    
    int mov=0,res=0;
    for (int i = 0; i < v.size(); i++) {
        if(v[i]=='U' && mov ==-1 ){
            res++;
        }
        if(v[i]=='U' ){
            mov++;
        }
        else if(v[i]=='D'){
            mov--;
        }
    }
    cout<<res;
    return 0;
}