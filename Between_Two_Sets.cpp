#include<iostream>
#include<vector>
using namespace std;

int main()
{   
    int n,m;
    cin>>n>>m;
    vector<int> a;
    vector<int> b;
    for (int i = 0; i < n; i++) {
        int d;
        cin>>d;
        a.push_back(d);
    }
    for (int i = 0; i < m; i++) {
        int e;
        cin>>e;
        b.push_back(e);
    }
    
    int res=0;
    int flag=0;
    for (int i = a[n-1] ; i <= b[0]; i++) {
        flag=0;
        for (int j = 0; j < n; j++) {
            if(i % a[j] != 0){
                flag=1;
                break;
            }
        }
        if(flag)
            continue;
        
        for (int k = 0; k < m; k++) {
            if(b[k]% i != 0){
                flag=1;
                break;
            }   
        }
        
        if(flag == 0)
            res++;
    }
    
    cout<<res;

    return 0;
}

