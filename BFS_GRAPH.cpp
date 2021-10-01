#include<bits/stdc++.h>
#include<iostream>

using namespace std;

const int N=1e5+2;
bool vis[N]; // "0" stored by default ,vis=visited
vector<int> adj[N]; //adjecency list

int main(){
    // n - nodes,m - edges
    int n,m;
    cin>>n>>m;

    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    queue<int> q;
    q.push(1);
    vis[1]=1;
    while(!q.empty()){
        int node=q.front();
        q.pop();
        cout<<node<<"\n";
        for(auto j:adj[node]){
            if(!vis[j]){
                q.push(j);
                vis[j]=1;
            }
        }
    }

    return 0;
}
