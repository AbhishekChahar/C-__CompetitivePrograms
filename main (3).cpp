  
#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
    int t1;
    cin>>t1;
    
    for (int i = 0; i < t1; i++) {
        
        for (int j = 0; j <= i; j++) {
                cout<<'*';
            }
        for (int k = 0; k < t1-i-1; k++) {
            cout<<'#';
        }
            cout<<endl;
        }
        
    
    return 0;
}