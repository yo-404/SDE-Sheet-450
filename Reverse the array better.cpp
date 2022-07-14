//using reverse function 
//reverseing both segments of the array 
//reverseing it all together to get the resultant answer

class Solution {
public:
        void reverse(vector<int>&num,int l,int h){ 
        while(l<h){
            swap(num[l],num[h]);
            l++;
            h--;
            } 
        }    
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        if(k<0){
            k+=nums.size();
        }
            reverse(nums,0,n-k-1);
            reverse(nums,n-k,n-1);
            reverse(nums,0,n-1);
            
        }
    
};