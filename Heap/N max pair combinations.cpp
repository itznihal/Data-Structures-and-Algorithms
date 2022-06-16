 class three{
     public:
     int val;
     int idx;
     int jdx;
 };
 
 struct cmp{
     bool operator()(three a , three b){
         return a.val<b.val;
     }
 };
 
vector<int> Solution::solve(vector<int> &a, vector<int> &b) {
    int n1 = a.size();
    int n2 = b.size();
     //sort
    sort(a.begin() , a.end());
    sort(b.begin(), b.end());
    
   //Declare heap ..//set for duplicate 
    priority_queue<three , vector<three> , cmp> pq;
    
    //set for avoid duplicate
    set<pair<int, int>> s;
    vector<int> ans;
    
    //Traverse and push pop from queue -> set in ans
    int n = a.size();
    pq.push({ a[n-1] + b[n-1] , n-1 , n-1});
    s.insert({n-1 , n-1});
    
    
    while(ans.size() != n){
        
        three th = pq.top();
        pq.pop();
        int vl = th.val, i=th.idx, j=th.jdx;
        ans.push_back(vl);
        
        if(i>0 && s.count({i-1 , j}) == 0){
            pq.push({a[i-1] + b[j] , i-1 , j});
            s.insert({i-1 , j});
        }
        
         if(j>0 && s.count({i , j-1}) == 0){
             pq.push({a[1] + b[j-1] , i , j-1});
            s.insert({i , j-1});
        }
        
        
    }
    
    
return ans;    
    
}




 
 
