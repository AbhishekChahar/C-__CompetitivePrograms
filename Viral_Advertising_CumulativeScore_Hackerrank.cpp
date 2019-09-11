#include<iostream>
#include<vector>
using namespace std;

int main()
{   
    int n;
    cin>>n;
    
    int val=5;
    int sum_like=0;
    for (int i = 0; i < n; i++) {
        sum_like += val/2;
        val=(val/2) *3;
    }
    cout<<sum_like;
    return 0;
}

