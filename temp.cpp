#include<iostream>
using namespace std;

void issorted(int arr[],int size){
   
//base case

       for (int i = 0; i < size; i++)
    {
        cout<< arr[i]<<endl; 
      
        cout<<"arr + 1 is  "<<arr+1;
        cout<<arr[i];
        // cout<<arr[1];
        // cout<<arr[2];
        // cout<<arr[3];
    }
  

}

int main(){
    int n;
    cin>>n;
      int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

   

    issorted(arr,n);

    // if(ans)
    // cout<<"sorted bro";
    // else{
    //     cout<<"not sorted vro";
    // }
}