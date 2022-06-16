// https://leetcode.com/problems/sort-characters-by-frequency/
// https://leetcode.com/problems/sort-array-by-increasing-frequency/

class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        
 //Heap approach
       // 1)store array in map to count freq
         //   2)store map into heap 
           // 3) print element from heap 
        
              int n =  nums.size();

        //Storing array into map
        unordered_map<int , int> mp;
        for(int i =0 ; i<n ; i++){
            mp[nums[i]]++;
        }
        
        //Map into heap
        priority_queue<pair<int,int> , vector<pair<int,int>> ,  greater<pair<int,int>>> minh;
        
        for(auto i = mp.begin() ; i!=mp.end() ; i++){
            minh.push(make_pair(i->second,i->first));
            
        }
        
        //Result
        vector<int> ans;
        while(minh.size()>0){
            int freq = minh.top().first;
            int ele = minh.top().second;
            for(int i=0 ; i<freq ; i++){
                ans.push_back(ele);}
            minh.pop();
        }
        
        return ans;
            
        
        
    }
};