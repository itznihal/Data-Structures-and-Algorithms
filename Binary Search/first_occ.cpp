class Solution {
public:
    
    int first(vector<int>& v, int target){
        
        int mid = -1;
        int start = 0;
        int end = v.size()-1;
        int res = -1;
        
        
        while(start <=end){
            
            mid = start + (end-start)/2;
            
            if(v[mid] == target){
                res = mid;
                end = mid-1;
            }
            else if(v[mid] > target){
                end = mid-1;
                
            }
            else{
                start= mid+1;
            }
            
            
            
        }
        
        return res;       
        
    }
    
       
    int last(vector<int>& v, int target){
        
        int mid = -1;
        int start = 0;
        int end = v.size()-1;
        int res = -1;
        
        
        while(start <=end){
            
            mid = start + (end-start)/2;
            
            if(v[mid] == target){
                res = mid;
                start = mid+1;
            }
            else if(v[mid] > target){
                end = mid-1;
                
            }
            else{
                start = mid+1;
            }
            
            
            
        }
        
        return res;       
        
    }
    
    
    
    
    vector<int> searchRange(vector<int>& nums, int target) {
       
        
        int pehla = first(nums , target);
        int aakhri = last(nums , target);
        
        vector<int> v;
        v.push_back(pehla);
        v.push_back(aakhri);
        
        return v;
        
        
    }
};