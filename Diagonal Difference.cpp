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
            cin>>arr[i][j];
        }
    }
    
    int temp = 0;
    for (int i = 0; i < t1; i++) {
        
        for (int j = 0; j < t1; j++) {
            if(i == j){
                temp += arr[i][j];
            }
        }
    }
    // cout<<temp<<endl;
    int temp2 = 0;
    for (int i = 0; i < t1; i++) {
        
        for (int j = 0; j < t1; j++) {
            if(i+j==t1-1){
                temp2 += arr[i][j];
            }
        }
    }
    // cout<<temp2<<endl;
    
    int sum = labs(temp-temp2);
    cout<<sum;
    return 0;
}
