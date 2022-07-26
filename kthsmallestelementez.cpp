#include<bits/stdc++.h>


using namespace std;

void findksmallest(vector<int>nums,int k){
    int size=nums.size();
    sort(nums.begin(),nums.end());
    cout<<nums[k-1];

}

int main(){

    cout<<"enter size of the array \n";
    int n;
    cin>>n;
    cout<<"enter elements in the vector";
    int x;
    vector<int> vc(x);
    for(int i=0;i<n;i++){
        cin>>x;
        vc.push_back(x);
    }
    cout<<"enter value of smallest k "<<endl;
    int k;
    cin>>k;
    findksmallest(vc,k);
    

}