#include<bits/stdc++.h>
using namespace std;
template <typename T>

class graph{




public:

// ds using to Represent Graph -> adgecent List
unordered_map<T , list<T>> adj;

void addEdge(T u , T v, bool direction){


//direction  = 0 => Unidirection
//Direction  = 1 -> Directed 

adj[u].push_back(v);

if(direction = 0){
    //Directed Both sides
    adj[v].push_back(u);
}

}

void printAdjList(){
    
    //Print pattern -> node -> node1 , node2 , node3..

    for(auto i : adj){
        cout << i.first << "->";
        for(auto j: i.second){
            cout << j << "," ;
        }
        cout << endl;
    }
}



};



int main(){

int n;
cout << "enter the no of nodes" << endl;
cin>> n;

int m;
cout << "Enter the no of edges";
cin >> m;

//Here mention type should be there for graph
graph<int> g;

for(int i=0 ; i< m ; i++){
    int u,v;
    cin >> u >> v;

    //Creating Edge -> for unidirected
g.addEdge(u , v , 0);

}

// printing Graph
g.printAdjList();

    return 0;

}
