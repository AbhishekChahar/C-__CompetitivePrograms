#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
    int t1;
    cin>>t1;
    int arr[t1][t1];
    
    for (int i = 0; i < t1; i++) {
        
        for (int j = 0; j < t1; j++) {
            if(i+j>=t1-1){
                cout<<'#';
            }
            else{
            cout<<' ';
            }
        }
        cout<<endl;
    }
    
    return 0;
}
