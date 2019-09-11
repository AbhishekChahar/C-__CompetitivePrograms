#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
    int a1,a2,a3,a4,a5,a6;
    cin>>a1>>a2>>a3>>a4>>a5>>a6;
    
    vector<int> v1;
    for (int i = 0; i < a5; i++) {
        int b;
        cin>>b;
        v1.push_back(b);
    }
    vector<int> v2;
    for (int i = 0; i < a6; i++) {
        int b1;
        cin>>b1;
        v2.push_back(b1);
    }
    int count = 0;
    for (int i = 0; i < a5 ; i++) {
        if(a3+v1[i]>=a1 && a2>=a3+v1[i]){
        count++;
        }
    }
    
    int count1 = 0;
    for (int i = 0; i < a6; i++) {
        if(a4+v2[i]>=a1 && a2>=a4+v2[i]){
            count1++;
        }
    }
    
    cout<<count<<endl;
    cout<<count1<<endl;
    return 0;
}
