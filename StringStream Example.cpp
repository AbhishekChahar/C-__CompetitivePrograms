//Stringstream Program //24,25,76 //24 25 76
#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

int main() {
    string str;
    cin >> str;  
    stringstream s1(str);   
    int a;
    char b;
    vector<int> v;
    while(s1>>a){
        v.push_back(a);
        s1>>b;
    }
    for(int i =0;i< v.size(); i++){
        cout<<v[i]<<"\n ";
    }
    
    return 0;
}


