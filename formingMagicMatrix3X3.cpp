#include<iostream>
#include<vector>
#include<math.h>
#include<climits>
using namespace std;

int main()
{   
    vector<vector<int>> valid_grids = { {2,7,6,9,5,1,4,3,8},{2,9,4,7,5,3,6,1,8},{4,3,8,9,5,1,2,7,6},{4,9,2,3,5,7,8,1,6},
                                        {6,1,8,7,5,3,2,9,4},{6,7,2,1,5,9,8,3,4},{8,1,6,3,5,7,4,9,2},{8,3,4,1,5,9,6,7,2}};
    
    int arr[9];
    for (int i = 0; i < 9; i++) {
        cin>>arr[i];
    }
    
    int min=INT_MAX;
    
    for (int i = 0; i < valid_grids.size() ; i++) {
        int res=0;
        for (int j = 0; j < 9; j++) {
            res=res+abs(arr[j]- valid_grids[i][j]);
        }
        if(res<min){
            min=res;
        }
    }
    cout<<min;
    
    return 0;
}