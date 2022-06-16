#include<bits/stdc++.h>
using namespace std;
int main()
{

// Genune technique
string str;
getline(cin , str);


// Other method
// cin  >> str;

string str = "Nihal";

// Now read String 
// if vector then -> v.size()
for(int i =0 ; i< str.length() ; i++){

    cout << str[i];
}


// Push string into vector
vector<char> v (str.begin() , str.end() );
v.reverse(v.begin() , v.end());
v.sort(v.begin() , v.end());
// etc

 return 0;
}