class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
           //right side smaller values
        //left side smaller values
        int ans = 0;
        int n = heights.size();
        vector<int> right, left;
        vector<int> res(heights.size());
        stack<int> st;
        
        //NSL - Neareast smaller left
        for(int i = 0;i<n;i++)
        {
            if(st.empty())
            {
                left.push_back(-1);
            }
            else if(heights[st.top()]<heights[i])
            {
                left.push_back(st.top());
            }
            else 
            {
                while(st.size() && heights[i]<=heights[st.top()])
                {
                    st.pop();
                }
                int ele  = st.empty() ? -1 : st.top();
                left.push_back(ele);
            }
            st.push(i);
        }
        while(!st.empty()) st.pop();
        
        //Neareast smalles right
        for(int i = n-1;i>=0;i--)
        {
            if(st.empty())
            {
                right.push_back(n);
            }
            else if(heights[st.top()]<heights[i])
            {
                right.push_back(st.top());
            }
            else
            {
                while(st.size() && heights[i]<=heights[st.top()])
                {
                    st.pop();
                }
                int ele  = st.empty() ? n : st.top();
                right.push_back(ele);                
            }
            st.push(i);
        }
        
        //Reverse right side smalller array
        reverse(right.begin(), right.end());
        
        //find max from that
        for(int i = 0;i<heights.size();i++)
        {
            res[i] = (right[i] - left[i]) - 1;
            ans = max(ans, res[i]*heights[i]);
        }
        
        return ans;
    }
};