#include<bits/stdc++.h>
using namespace std;
/*
Seive Method :-
1) Declare Matrix
2)Fill Matrix
3)Traverse and reutrn Output */

void primeSeive(int range){

int primeMatrix[range+1] = {0};

for(int i = 2; i<=range ; i++){
    if(primeMatrix[i] == 0){
        for(int j=i*i ; j<= range ; j+=i){
            primeMatrix[j] = 1;

        }
    }
}

//Print all Primes
for(int i = 2 ; i<=range ; i++){
    if(primeMatrix[i] == 0)
        cout << primeMatrix[i];
}

}


int main(){


    int range;
    cin >> range;

primeSeive(range);

}