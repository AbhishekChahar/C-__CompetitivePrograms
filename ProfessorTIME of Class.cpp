#include <iostream>
#include <vector>
#include<string>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    vector<string> res;
    
    while(t--){
        int a, b;
        cin>>a>>b;
        vector<int> arrival_time;
        for (int i = 0; i < a; i++) {
            int ti;
            cin>>ti;
            arrival_time.push_back(ti);
        }
        for (int i = 0; i < a; i++) {
            if(arrival_time[i]<= 0)
                b--;
        }
        if(b>0){
            res.push_back("YES");
        }
        else{
            res.push_back("NO");
        }
        
        
    }
    for (auto i : res) {
        cout<<i<<endl;
    }

    return 0;
}
