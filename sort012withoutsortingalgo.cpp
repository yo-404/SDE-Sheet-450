//code using dutch national flag algorithm
#include<bits/stdc++.h>

using namespace std;

void sortflag(int nums[],int size){
    int low=0;
    int mid=0;
    int high =size;

    while(mid<high){
        if(nums[mid]==0){
            swap(nums[mid],nums[low]);
            mid++;
            low++;
        }
        else if(nums[mid]==2){
            swap(nums[mid],nums[high]);
            high--;
        }
        else
        mid++;
    }
    

    for(int i=0;i<size;i++){
        cout<<nums[i]<<" ";
    }
}

int main(){

    cout<<"enter size of the array \n";
    int n;
    cin>>n;
    cout<<"enter elements in the vector";
    int x;
    int arr[n];
    // vector<int> vc(x);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        // vc.push_back(x);
    }

    sortflag(arr,n);

}