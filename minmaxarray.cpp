#include<bits/stdc++.h>

using namespace std;

int main(){
    int mini=INT_MAX;
    int maxi =INT_MIN;

    vector<int> arr = {11 ,2,3,4,5,6,7,9};
    for(int i=0;i<arr.size();i++){
        mini = min(mini,arr[i]);
        maxi=max(maxi,arr[i]);
    }

    cout<<"max ="<<maxi;
    cout<<"min = "<<mini;

    return 0;
}