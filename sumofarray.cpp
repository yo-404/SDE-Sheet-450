#include<iostream>
using namespace std;

int sumofarr(int arr[],int size){
   
   if(size == 0){return 0;}
   

   if(size == 1)
   return arr[0];

   int Remainingpart= sumofarr(arr+1,size-1);
   int sum=arr[0]+Remainingpart;

  return sum;
    
   }
  

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int sum=sumofarr(arr,n);

   cout<<"total ="<<sum;
}