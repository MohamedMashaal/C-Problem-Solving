#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;
typedef vector<int> vi ;


void DFS(int i, vector <vi > & graph ,int visited_dfs[] , int groups[]){
    visited_dfs[i] = 1;
        for(auto &child : graph[i]){
            if(visited_dfs[child] != 1){
            DFS(child ,graph ,visited_dfs , groups);
            int x = groups [child] + 1 ;
            if(x > groups[i])
            groups[i] = x ;
            }
            else{
            int x = groups[child] +1 ;
            if(x > groups[i])
                groups[i] = x;
            }
        }

    return ;
}

int main()
{
    int n ;
    scanf("%d",&n);
    int visited_dfs[n]={0};
    int groups [n] ;
    for (int i = 0  ; i < n ; i ++)
        groups[i] = 1 ;
    vector <vi> graph(n);
    for(int i = 0 ; i < n ; i ++){
        int z ;
        cin >> z ;
        if(z!= -1)
            graph[z-1].push_back(i);
    }
    for(int i = 0 ; i < n ; i ++)
        if(visited_dfs[i] == 0)
            DFS( i , graph ,visited_dfs , groups );
    int mx = 1 ;
        for(auto & num : groups)
            if(num > mx)
                mx = num ;
    printf("%d" , mx);
    return 0;
}
