#include<bits/stdc++.h>
using namespace std;

int otp(string s){
    string ans;
//Traverse and append into ans
//Return first 4 char of ans string else -1

//Traverse 

for(int i = 0 ; i<s.length() ; i++){

if(i%2 != 0){
    //odd index 
    char c = s[i];
 int num =  int(c);
 num = num*num;

 ans.append(to_string(num));


}


}

//Return lenght string
if(ans.length()<4){
return (-1);
} 

int num2 = stoi(ans.substr(0,4));

return num2;
 
}


int main(){


    string s = "8980452";


 cout << opt(s);   
    return 0;

}