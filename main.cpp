#include <iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;


int main()
{
    string s;
    cin>>s;
    
    int count = 0;
    vector<int> v;
    for (int i = 0; i < s.size(); i++) {
       int m = int(s[i]);
       v.push_back(m);
    }
    for (int i = 0; i < v.size(); i++) {
        if(v[i]<97){
            count = count+1;
        }
    }
    if(int(s[0])<97){
        cout<<count;
    }
    else{
        cout<<count+1;
    }
    
    return 0;
}