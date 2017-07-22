#include <iostream>
#include <vector>
using namespace std;

int visited[40000]={0};
bool reached = false ;
void DFS(vector<vector <int> > &adj , int i , int t){
    visited[i] = 1;
    if(i == t)
        reached = true ;
    for(auto & child : adj[i]){
        if(!visited[child])
            DFS(adj , child , t);
        if(reached)
            return ;
    }
}

int main()
{
    int n , t ;
    cin >> n >> t ;
    vector<vector <int> > adj (n +1 , vector <int> ()) ;
    for(int i = 1 ; i <= n-1; i ++ ){
     int x ;
     cin >> x ;
     adj[i].push_back(i+x);
    }
    DFS(adj ,1 ,t);
    if(reached)
        cout << "YES" ;
    else
        cout << "NO" ;
    return 0;
}
