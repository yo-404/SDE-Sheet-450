#include<iostream>
using namespace std;

int count(int n){
    if(n==0) return 0;

    int small=count(n-1);
    int big=small +n;

     return big;
}

int main(){
    int n;
    cin>>n;

    int ans=count(n);
    cout<<ans<<endl;

    return 0;
}