#include<iostream>
using namespace std;

int factorial(int n){
    if(n==0) return 1;

    int sim=factorial(n-1);
    int ans=n*sim;

    return ans;
}

int main(){
    int n;
    cin>>n;

    int ans=factorial(n);
    cout<<ans<<endl;

    return 0;
}