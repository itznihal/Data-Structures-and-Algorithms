int kthelement(int arr[] ,  int n , int k){

//traverse array push into heap
// pop according

priority_queue<int> maxh;

for(int i =0 ; i< n ; i++)
{
    maxh.push(arr[i]);
    if(maxh.size() > k){
        maxh.pop();
    }
}

return maxh.top();

}