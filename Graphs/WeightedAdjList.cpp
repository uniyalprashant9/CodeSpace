#include<bits/stdc++.h>
using namespace std;
void addEdge(vector<pair<int,int> > adj[],int v1, int v2,int wt){
    adj[v1].push_back(make_pair(v2,wt));
    adj[v2].push_back(make_pair(v1,wt));
}
void printGraph(vector<pair<int,int> > adj[],int E){
    for(int i=0;i<E;i++){
        cout<<i;
        for(auto x: adj[i]){
            cout<<" --> "<<x.first << "("<<x.second<<") ";
        }

        /*
        for(auto it=adj[i].begin;it<adj[i].end;i++)
            cout<<it->first>>it->second;
        */
        cout<<endl;
    }
}
int main(){
    int V,E,v1,v2,wt;
    cin>>V>>E;
    vector<pair<int,int> > adj[E];
    for(int i=0;i<V;i++){
        cin>>v1>>v2>>wt;
        addEdge(adj,v1,v2,wt);
    }
    printGraph(adj,E);
    return 0;
}