#include<bits/stdc++.h>
using namespace std;


///Recursive
string rdr(string s , string prev){

//Base Conddition 
if(s.length() == 0){
    return prev;}


//calculation 
char ch = s[0];
if(prev.find(s[0])){
rdr(s.substr(1) , prev);
}   
else{
rdr(s.substr(1) , ch+prev);
} 





}

//iterative
string rdr(string s , string ans){

//index array approach -> o(n)
//i,j loop approach -> o(n^2)


// idx array approach 
char freq[26] = {0};

//Traverse string -> update freq array -> add into ans 
// -> if already exist in freq -> not add into ans 


for(int i = 0 ; i< s.length() ; i++){

if(freq[s[i]] == 0){
    freq[s[i]]++;
    ans.push_back(s[i]);
}
}


reverse(ans.begin() , ans.end());

return ans;


}










int main(){



/*Approaches 

1) Iterative -> o(n^2)
2) iterative -> o(n) , SC: o(26)
3)Recursive -> o(n) SC: o(26)



*/

string s = "infosys";
string ans =  rdr(s , "");
reverse(ans.begin()  , ans.end());

cout << ans << endl;
    return 0;

}