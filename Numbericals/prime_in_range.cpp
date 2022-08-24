#include<bits/stdc++.h>
using namespace std;

//To check prime Number
bool isPrime(int n){


bool flag = true;
for(int i = 2 ; i<sqrt(n) ; i++)
{
    if(n%i == 0){
        flag = false;
        break;
    }
}
return flag;

}




int main(){


int n;
cin >> n;
for(int i=2 ; i<50 ; i++)
    if(isprime(i))
        cout << i;


    return 0 ;

}