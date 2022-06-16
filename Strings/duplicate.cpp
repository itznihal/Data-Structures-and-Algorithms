#include<bits/stdc++.h>
using namespace std;
# define NO_OF_CHARS 256
int main()
{
string s;
getline(cin , s);


// Approaches-> 
// 1. Sort the Stirng and find
// 2. idx array in string 
// 3. Using unordered map 

// 2. idx array approaches 

int idx[256];
// or 
int *idx = (int *)calloc(256,sizeof(int));


for(int i = 0 ; i< 256 ; i++)
    idx[i] = 0;

// Traverse Sting
for(int i = 0 ; i< s.length() ; i++){

if(s[i] >= 'a' && str[i] <='z'){

    idx[s[i] - 'a']++;
}
else if(s[i] >= 'A' && str[i] <='Z'){

    idx[s[i] - 'A']++;
}
}

// Traverse idx and print which occurance is greater than 0
for(int i = 0 ; i< 256 ; i++){
if(idx[i] > 1){
    cout << i << idx[i] << endl; 
}

}

// Approach 2
// Using Unordered Maps -> sort occurance

// C++ program to count all duplicates
// from string using maps

void printDups(string str)
{
	map<char, int> count;
	for (int i = 0; i < str.length(); i++) {
		count[str[i]]++;
	}

	for (auto it : count) {
		if (it.second > 1)
			cout << it.first << ", count = " << it.second
				<< "\n";
	}
}






return 0;
}