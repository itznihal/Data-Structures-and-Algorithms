class Solution {
public:
    bool isValid(string s) {
  
        
        //Steps
        //Nature - LIFO 
        //String taraverse push and pop stack with condition  according
            //opening - push in stack 
            //closing - 
                //if stack empty -> return false
                //pop from stack and check same of not
        //Stack must  be empty -> return true
        
        
        stack<char>st;
        
         //String taraverse push and pop stack with condition  according
        for(int i =0  ; i<s.length() ; i++){
            
            //opening - push in stack
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                
                st.push(s[i]);
                
            }
            else{
                 //closing - 
                //if stack empty -> return false
                //pop from stack and check same of not 
                
                if(st.size() == 0){ return false;}
                
                char c = st.top();
                st.pop();
                
                if( (s[i] == ')' && c == '(') ||  (s[i] == '}' && c == '{')  || (s[i] == ']' && c == '[') ){
                    continue;
                }
                
                else{ return false;}
                
                
                
                
            }
            
        }
        
         //Stack must  be empty -> return true
        if(st.empty()){return true;}
        
        
        
        
        return false;
        
    }
};