#include<bits/stdc++.h>
using namespace std;

struct enemy{
    int pos;
    int power;
    int bonous;
};


bool comparator( struct enemy e1 , enemy e2){

    if(e1.power < e2.power) return true;
    else if(e1.power > e2.power) return false;
    else if(e1.pos < e2.pos) return true;

    return false;


}

int defeatNum(int power[] , int bonous[] , int expr_power , int moster){

//Struct 
//Sort 
//Traverse and return ans 


// Struct
struct enemy e[moster];

for(int i = 0 ; i< moster ; i++){
e[i].pos = i+1;
e[i].power = power[i];
e[i].bonous = bonous[i];

}

//Sort
sort(e , e+moster , comparator);

//Traversing -> feaseable 
int count = 0;
for(int i =0 ; i< moster ; i++){
    if(expr_power >= e[i].power){
        count++;
        expr_power += e[i].bonous;

    }
    else{
        break;
    }
}







    return count;
}



int main(){


int expr_power = 123;
int monster = 3;
int power[] = { 1 , 2 ,3};
int bonous[] = {4 , 5 , 6};

cout << defeatNum( power , bonous , expr_power , monster);

    return 0;


}