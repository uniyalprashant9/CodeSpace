#include<bits/stdc++.h>
using namespace std;
void addEdge(vector<int> adj[],int v1, int v2){
    adj[v1].push_back(v2);
    adj[v2].push_back(v1);
}
void printGraph(vector<int> adj[],int E){
    for(int i=0;i<E;i++){
        cout<<i;
        for(auto x: adj[i]){
            cout<<" --> "<<x;
        }
        cout<<endl;
    }
}
int main(){
    int V,E,v1,v2;
    cin>>V>>E;
    vector<int> adj[E];
    for(int i=0;i<V;i++){
        cin>>v1>>v2;
        addEdge(adj,v1,v2);
    }
    printGraph(adj,E);
    return 0;
}