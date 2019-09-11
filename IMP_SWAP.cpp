#include<iostream>
using namespace std;

int main(){
    int a , b;
    cout<<"Enter two Numbers: ";
    cin>>a>>b;
    // swap(a,b);
    
    // int temp =a;
    // a=b;
    // b=temp;
    
    a=a+b;  
    b=a-b;  
    a=a-b;  
    
    cout<<a<<" "<<b;

    return 0;
}