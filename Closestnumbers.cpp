#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main()
{
    int num;
    cin>>num;
    
    vector<long long int>v;
    for (int i = 0; i < num; i++) {
        long long int d;
        cin>>d;
        v.push_back(d);
    }
    
    // min_list(v);
    
    sort(v.begin(),v.end());
    // for (auto i : v) {
    //     cout<<i<<" ";
    // }
    
    vector<long long int>res;
    int long long abs_dif=abs(v[0]-v[1]);
    for (int i = 1; i < v.size(); i++) {
        
        if(abs_dif == abs(v[i]-v[i-1])){
            res.push_back(v[i-1]);
            res.push_back(v[i]);
        }
        else if(abs_dif > abs(v[i]-v[i-1]) ){
            abs_dif = abs(v[i]-v[i-1]);
            res.clear();
            res.push_back(v[i-1]);
            res.push_back(v[i]);
        }
    }
    cout<<"\n";
    for (auto i : res) {
        cout<<i<<" ";
    }

    return 0;
}
