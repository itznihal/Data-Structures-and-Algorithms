typedef pair<int, pair<int,int>> pi;
class Solution
{
    public:
    //Function to merge k sorted arrays.
    
    vector<int> mergeKArrays(vector<vector<int>> arr, int k)
    {
        //code here
        //define vector, return it as answer at end
        vector<int> v;
   
        //define a minimum heap
        priority_queue<pi,vector<pi>,greater<pi> > minh;
        //add the first elements of each row to the minheap.make pairs as the value at the 
        //position, and then club it with the pair of your row and 1st column of each row
        for(int i=0;i<k;i++){
            minh.push(make_pair(arr[i][0], make_pair(i,0)));
        }
        //now till the heap is not empty pop the top element 
        while(minh.size()>0){
            pi x=minh.top();
            minh.pop();
            //store the value part in vector
            v.push_back(x.first);
            //so the pair we made for row and column we define them for adding elements
            int row=x.second.first;
            int column=x.second.second;
            //check if index doesn't go out of bounds
            if(column<k-1){
                //similar to above push the other elements in 2nd column from each row, then 
                //next time 3rd column and repaet till end of array column
                minh.push(make_pair(arr[row][column+1], make_pair(row,column+1)));
            }
        }
        //return vector that has all elements stored in sorted order.
        return v;
    }
};