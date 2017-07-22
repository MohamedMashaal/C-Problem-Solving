#include <iostream>

char cube [11][11][11] ;
int visited [11][11][11] = {0} ;
int cnt = 0 ;
using namespace std;
int k , n , m ;

void dfs(int a , int b , int c){
    if(cube[a][b][c] == '#'){
        return ;
    }
    visited[a][b][c] = 1 ;
    cnt ++ ;
    for(int i = a-1 ; i <= a+1 ; i++){
        for(int j = b-1 ; j <= b+1 ; j++){
            for(int l = c-1 ; l <= c+1 ; l++){
                if(i< 1 || i > k || j < 1 || j > n || l < 1 || l > m)
                    continue ;
                if(i == a-1 && j == b-1 && l == c-1 ||i == a-1 && j == b-1 && l == c+1 ||i == a-1 && j == b+1 && l == c-1 ||i == a-1 && j == b+1 && l == c+1 )
                    continue;
                if(i == a+1 && j == b+1 && l == c+1 ||i == a+1 && j == b-1 && l == c+1 ||i == a+1 && j == b+1 && l == c-1 ||i == a+1 && j == b-1 && l == c-1)
                    continue ;
                if(i == a-1 && j == b-1 && l == c ||i == a-1 && j == b+1 && l == c ||i == a-1 && j == b && l == c-1 ||i == a-1 && j == b && l == c+1 )
                    continue;
                if(i == a+1 && j == b-1 && l == c ||i == a+1 && j == b+1 && l == c ||i == a+1 && j == b && l == c-1 ||i == a+1 && j == b && l == c+1 )
                    continue;
                if(i == a && j == b-1 && l == c-1 ||i == a && j == b-1 && l == c+1 ||i == a && j == b+1 && l == c-1 ||i == a && j == b+1 && l == c+1 )
                    continue;
                if(i == a && j == b && l == c)
                    continue ;
                if(cube[i][j][l] == '#')
                    continue;
                if(visited[i][j][l])
                    continue ;
                visited[i][j][l] = 1 ;
                dfs(i , j , l);
            }}}
}



int main()
{
    cin >> k >> n >> m ;
    for(int i = 1 ; i <= k ; i++){
        for(int j = 1 ; j <= n ; j++){
            for(int l = 1 ; l <= m ; l++){
                  cin >> cube[i][j][l];}}}
    int y , z ;
    cin >> y >> z ;
    dfs(1,y,z);
    cout << cnt ;
    return 0;
}
