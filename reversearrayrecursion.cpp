#include<bits/stdc++.h>
 using namespace std;

 void reversearr(vector<int> &arr,int start,int end){
 if(start>=end){ 
     return;
 }

    int temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;

    reversearr(arr,start+1,end-1);
 
 }
// use different formal parameter
 void printarr(vector<int> &arrs,int n){
    for(int i=0;i<n;i++){
        cout<<arrs[i]<<" ";
    }
 }


 int main(){

    vector<int> arr;
    int n;
    cout<<"enter size of array";
    cin>>n;
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        arr.push_back(x);
    }

    reversearr(arr,0,n-1);
    printarr(arr,n);
 }