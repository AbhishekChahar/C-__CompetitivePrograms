#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    vector<int> v1;
    for (int i = 0; i < a; i++) {
        int b;
        cin>>b;
        v1.push_back(b);
    }
    int energy = 0;
    int i = 0;
    do{
        if(v1.size() <= i+b)
        i = 0;
        else{
            i=i+b;
        }
        energy = energy+1+2*v1[i];
    }
    while(i!=0);
    cout<<100-energy;
    return 0;
}
