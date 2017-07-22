#include <iostream>
#include <vector>
using namespace std;
vector <int> num1 ;
vector <int> num2 ;
bool possible = true ;
int visited[100010] = {0};


void DFS(vector < vector <int > > & adj , int start , int pick){
    if(!possible)
        return ;
    visited[start]= 1;
    if(!pick){
        num2.push_back(start);
    }
    else
        num1.push_back(start);
    for(auto &child : adj[start]){
        if(!visited[child])
            DFS(adj , child , !pick);
        if(!possible)
            return ;
    }

}


int main()
{
    int n , m ;
    cin >> n >> m ;
    vector < vector <int > > adj (n+1 , vector <int> ());
    int x , y ;
    for(int i = 0 ; i < m ; i ++){
        cin >> x >> y ;
        adj[x].push_back(y);
        adj[y].push_back(x);}
    DFS(adj , x , 0);
    if(possible){
        cout << num1.size() << '\n' ;
        for(int i = 0 ; i < num1.size() ; i ++)
            cout << num1[i] << " " ;
        cout << '\n' <<num2.size() << '\n' ;
        for(int i = 0 ; i < num2.size() ; i ++)
            cout << num2[i] << " " ;
        }
        else{
            cout << -1 ;
        }

    return 0;
}
