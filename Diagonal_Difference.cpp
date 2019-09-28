#include<bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    int size;
    cin>>size;
    
    int arr[size][size];
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cin>>arr[i][j];
        }
    }
    
    int lsum =0 ; 
    int rsum =0;
    for (int i = 0; i < size; i++) {
        lsum += arr[i][i];
        rsum += arr[i][size-i-1];
    }
    cout<<abs(lsum-rsum);
    
    return 0;
}
