class MedianFinder {
public:
    
    //declare min heap + maxhip
    //take size of both add number according condition(push and pop)
    //find median 
    
    priority_queue<int> maxh;
    priority_queue<int , vector<int>,greater<int>> minh;
    
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        
       int lsize = maxh.size();
        int rsize = minh.size();
        
        if(lsize == 0){
            //no element in max heap - push into max heap
            maxh.push(num);
            
        }
        else if(lsize == rsize)
        {
            if(num<minh.top()){
                //push in max heap
                maxh.push(num);
            }
            else {
                //pop top element from min heap and push num into it
                int temp = minh.top();
                minh.pop();
                maxh.push(temp);
                minh.push(num);
            }
            
        }   
        else{
            if(minh.size()==0){
                if(num>maxh.top() ){
                    //push it in min heap
                    minh.push(num);
                }
                else{
                    //pop top element of max heap and push it in min heap + push num into max heap
                    int temp = maxh.top();
                    maxh.pop();
                    maxh.push(num);
                    minh.push(temp);
                }
                
            }
            else if(num>=minh.top()){
                //push num into min  heap
                minh.push(num);
                
            }
            else{
                if(num<maxh.top()){
                    //pop max heap and push number in mean heap
                    int  temp = maxh.top();
                    maxh.pop();
                    maxh.push(num);
                    minh.push(temp);

                    
                }
                else{
                    //push in meanheap
                    minh.push(num);
                }
                
            }
                
        }
        
        
    }
    
    double findMedian() {
        int lsize = maxh.size();
        int rsize = minh.size();
        
        if(lsize> rsize){
            return (double)maxh.top();
        }
        else {
            return ((double)maxh.top()+(double)minh.top())/2;
        }
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */