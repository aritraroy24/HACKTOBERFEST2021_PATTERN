#include<bits/stdc++.h>
using namespace std;
vector<int>topological(unordered_map<int,vector<int>>graph,int size){
    vector<int>res;
    queue<int>q;
    vector<int>v(size,0);
    for( int i=0;i<size;i++){
        for(auto x=graph[i].begin();x!=graph[i].end();x++){
            v[*x]++;
        }
        }
        for(int i=0;i<v.size();i++){
            if(v[i]==0){
              q.push(v[i]);
            }
        }
        while(!q.empty()){
          int p=q.front();
          q.pop();
          res.push_back(p);
          for(auto y=graph[p].begin();y!=graph[p].end();y++){
              v[*y]--;
              if(v[*y]==0){
                  q.push(v[*y]);
              }
          } 
        }
        return res;
}
int main(){
    int size=5;
    unordered_map<int,vector<int>>graph(5);
    graph[0].push_back(1);
    graph[0].push_back(2);
    graph[1].push_back(2);
    graph[1].push_back(3);
    graph[2].push_back(3);
    graph[2].push_back(4);
   vector<int>res1=topological(graph,size);
    for(int i=0;i<res1.size();i++){
        cout<<res1[i];    }

    return 0;
}