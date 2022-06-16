class Solution {
public:
    int findMin(vector<int>& nums) {
        
        int N = nums.size();
        int start =0;
        int end = N-1;
        int mid = -1;
int next =-1;
        int prev = -1;
        
        
        while(start<=end){
            mid = start + (end - start)/2;
next = (mid+1)%N;
prev = (mid+N-1)%N;    
            
            if(nums[mid] <= nums[next] && nums[mid]<=nums[prev]){
                return nums[mid];
            }
            if(nums[mid] <= nums[end]){
                end = mid-1;
            }
            else if(nums[mid] >=nums[start]){
                start = mid+1;
            }
            
        }
        
        
        return prev;
    }
};