#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
#include<bits/stdc++.h>

using namespace std;

int main(){
    
    int no_of_items, index, sum=0;
    cin>>no_of_items>>index;
    vector<int> v(no_of_items);
    for (int i = 0; i < no_of_items; i++) {
        cin>>v[i];
    }
    cin>>sum;
    
    int res=0;
    for (int i = 0; i < v.size(); i++) {
        if(i != index)
            res += v[i];
    }
    
    int sum_all= accumulate(v.begin(),v.end(), 0);
    sum_all = sum_all/2;
    if((res/2) == sum){
        std::cout << "Bon Appetit" << std::endl;
    }
    else{
        cout<<abs(sum-(res/2));
    }
    
    
    
    return 0;
}