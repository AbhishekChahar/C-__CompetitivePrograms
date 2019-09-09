#include<iostream>
#include<vector>
using namespace std;
int main(){
    
    int t;
    cin>>t;
    vector<int>res;
    while(t--){
    	
        int size;
        cin>>size;
        vector<int> fib(size);
        fib[0]=0;
        fib[1]=1;
        for (int i = 2; i < size; i++) {
            fib[i]=fib[i-1]+fib[i-2];
        }
        
        // for (auto i : fib) {
        //     cout<<i<<" ";
        // }
        // cout<<endl;
        
        for (int i = 0; i < size; i++) {
            fib[i] = fib[i]%10;
        }
        
        // for (auto i : fib) {
        //     cout<<i<<" ";
        // }
        // cout<<endl;
        
        while(fib.size() != 1){
            int k=0;
            for (int i = 0; i < fib.size(); i++) {
                fib[i]= fib[(i*2) + 1];
            }
            
//            for (int i=0 ; i<  fib.size(); i++) {
//                cout<<fib[i]<<" ";
//            }
//            cout<<endl;
            
            int s=fib.size();
        
            if(s>(s/2) )
                fib.erase(fib.begin()+ s/2 , fib.begin()+s);
            else
                fib.erase(fib.begin()+ s);
                
//            for (int i=0 ; i<  fib.size(); i++) {
//                cout<<fib[i]<<" ";
//            }
//            cout<<endl;
            // cout<<fib.size();
                
        }
        res.push_back(fib[0]);
        fib.clear();
        // cout<<endl;
    }
    
    for (int i=0 ; i<  res.size(); i++) {
                cout<<res[i]<<"\n";
            }
    return 0;
}


