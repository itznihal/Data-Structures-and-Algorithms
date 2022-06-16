class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        
        
        
int n = arr.size();
        //Max heap approach
priority_queue<pair<int ,int>> maxh;
        
        //Traverse array -  add element into heap
        for(int i = 0 ; i< n ; i++){
            maxh.push({abs(arr[i] - x) , arr[i]});
            if(maxh.size() > k){
                maxh.pop();
            }
        }
        
        
        //Storing ans from heap
        vector<int> ans;
        while(maxh.size() > 0){
            ans.push_back(maxh.top().second);
            maxh.pop();
        }
            sort(ans.begin() , ans.end());   
        return ans;
    }
};