#include<bits/stdc++.h>


using namespace std;

void findksmallest(vector<int>nums,int k){
    priority_queue<int> pq;
    int n=nums.size();
    for(int i=0;i<n;i++){
        pq.push(nums[i]);
    }
    for(int i=1;i<k;i++){
        pq.pop();
    }
    cout<<pq.top();

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