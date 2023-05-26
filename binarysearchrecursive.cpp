#include<iostream>
using namespace std;

void binsearch(int arr[],int s,int n,int flag){
    int mids=(s+n)/2;
    if(s>n) cout<<"not found !!!";
    //base case

    

    if(mids>flag){
        // n=mid;
    binsearch(arr,s,mids,flag);
    } 
    else if(mids<flag){
        // s=mid;3
        binsearch(arr,mids,n,flag);
    }
    else
        cout<<"element found !!";

    



}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter element to be searched "<<endl;
    int s=0;
    int flag=0;
    cin>>flag;
    int mid;
    binsearch(arr,s,n,flag);

}