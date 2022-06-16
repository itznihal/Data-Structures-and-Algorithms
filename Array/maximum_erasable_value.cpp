class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        
        
        int n =  nums.size();
        vector<int> p(n+1 , 0);
        
        for(int i=0 ; i<n ; i++){
            p[i+1]= p[i] +  nums[i];
        }
        
        vector<int> M(10001 , -1);
        int s =0;
        int ans =0;
        for(int i=0 ; i< n ; i++){
            s = max( s , M[nums[i]]+1);
            ans = max(ans , p[i+1] - p[s]);
            M[nums[i]]=i;
        }
        
              
        return ans;
         
        
        
        
        
    }
};