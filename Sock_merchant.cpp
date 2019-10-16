#include<iostream>
#include<algorithm>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main()
{   
    int a;
    cin>>a;
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
    int count = 0;
    for (int i = 0; i < a; i++) {
        int b;
        cin>>b;
        v1.push_back(b);
    }
    sort(v1.begin(),v1.end());
    for (int i = 0; i < a; i++) {
        
        while( i < a-1 && v1[i]==v1[i+1]){
            i++;
        }
        v2.push_back(v1[i]);
    }
    
    for (int i = 0; i < v2.size(); i++) {
        count = 0;
        for (int j = 0; j < a; j++) {
            if(v2[i]==v1[j]){
                count++;
            }
        }
        v3.push_back(count/2);
    }

    cout<<accumulate(v3.begin(),v3.end(), 0);
    
    return 0;
}
