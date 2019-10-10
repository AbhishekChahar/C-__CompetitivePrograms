#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    int a;
    cin>>a;
    vector<char> v1;
    for (int i = 0; i < a; i++) {
        char c;
        cin>>c;
        v1.push_back(c);
    }
    int b;
    cin>>b;
    vector<char> v2;
    
    for (int i = 0; i < v1.size(); i++) {
        int m = int(v1[i]);
        //cout<<v1[i];
        if(m>64 && m<91 || m>96 && m<123){
            int g = int(v1[i])+b;
        
              if((m>64 && m<91) && g>90) {
                  while(g>90) {
                      g = g - 90 + 64;
                     };
                  char l = char(g);
                  v2.push_back(l);
              }
              
              else if((m>96 && m<123 )&& g>122) {
                      while(g>122){
                      g = g-122+96;
                      }
                  char l = char(g);
                  v2.push_back(l);
              }
              else {
                  char l = char(g);
                  v2.push_back(l);
              }
               
        }
        
        else{
            v2.push_back(v1[i]);
        }
        
    }
   
         for (auto i : v2) {
             cout<<i;
         }
    
    return 0;
}
