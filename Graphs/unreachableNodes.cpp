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
void BFS(vector<int> adj[],int src,int E){
    queue<int> q;
    int level[E]={0};
    bool visited[E]={false};
    q.push(src);
    level[src]=0;
    visited[src]=true;

    while(!q.empty()){
        int p=q.front();
        q.pop();
        for(auto i=adj[p].begin();i<adj[p].end();i++){
            if(!visited[*i]){
                level[*i]=level[p]+1;
                visited[*i]=true;
                q.push(*i);
            }
        }
    }
    cout<<endl<<"Unreachable Nodes: ";
    for(int i=0;i<E;i++){
        if(visited[i]==0)
            cout<<i<<" ";
    }
}
int main(){
    int V,E,v1,v2,src;
    cin>>V>>E;
    vector<int> adj[E];
    for(int i=0;i<V;i++){
        cin>>v1>>v2;
        addEdge(adj,v1,v2);
    }
    printGraph(adj,E);
    cout<<"Enter source Vertex:";
    cin>>src;
    BFS(adj,src,E);
    return 0;
}