#include<iostream>
#include<vector>
using namespace std;

int main()
{   
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    int max=arr[0], min=arr[0];
    int res_min=0, res_max=0;
    for (int i = 1; i < n; i++) {
        if(arr[i]<min){
            min=arr[i];
            res_min++;
        }
        else if(arr[i]> max){
            max=arr[i];
            res_max++;
        }
    }

    cout<<res_max<<" "<<res_min;

    return 0;
}

