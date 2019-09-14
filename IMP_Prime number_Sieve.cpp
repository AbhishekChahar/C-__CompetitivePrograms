#include <iostream>
#include<vector> 
#include<math.h>
using namespace std;

void sieve(int number){
    
    vector<bool> v ( number+1 , 1);
    v[0] = 0;
    v[1] = 0;
    
    int m=sqrt(number);
    for (int i = 2; i <= m ; i++) {
        if(v[i]){
            for (int j = i*i ; j <= number ; j=j+i) {
                v[j]=0;
            }
        }
    }
    for (int i = 0; i <= number; i++) {
        if(v[i])
            cout<<i<<" ";
    }
    
}

int main()
{
    cout<<"Hello World";
    int num;
    cin>>num;
    sieve(num);
    return 0;
}
