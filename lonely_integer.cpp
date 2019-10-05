#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
    vector<int> v1;
    int a;
    cin>>a;
    int count = 0;
    vector<int> v2;
    for(int i = 0; i<a ; i++){
        int b;
        cin>>b;
        v1.push_back(b);
    }
    for(int i = 0; i<a ; i++){
        
        count = 0;

        for(int j = 0; j<a; j++){
            if(v1[i]==v1[j]){
                count++;
            }
        }
        v2.push_back(count);
    }
    
    for(int i = 0; i<a; i++){
        if(v2[i]==1){
        cout<<v1[i];
        }
    }


    return 0;
}
