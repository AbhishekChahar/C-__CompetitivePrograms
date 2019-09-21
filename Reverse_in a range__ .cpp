#include<iostream>
#include<vector> 
using namespace std;

int main(){
    
    int num, j, k;
    cin>>num>>j >> k ;
    int count= 0;
    for (int i = num; i <= j ; i++) {
        
        int rev=0;
        int var=i;
        while(var != 0){
            int rem = var % 10 ;
            rev = (rev * 10) + rem;
            var = var/10;
        }
        
        if( (abs(rev - i))% k == 0 ){
            count++;
        }
    }
    
    cout<<count;
    
    return 0;
}