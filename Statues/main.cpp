#include <iostream>
#include <vector>
using namespace std;

char board[10][10] ;
int visited[9][9] = {0};
char temp [10][10];
bool result = false ;
vector < pair <int, int > > s ;

void board_build(int st){
    for(int i = s.size()-1 ; i >= 0 ; i --){
        int x = s[i].first;
        int y = s[i].second;
        if(x+st<=8)
        temp[x+st][y] ='S';
    }
}

void reset_temp(){
    for(int i = 1 ; i <= 8 ; i ++){
        for(int j = 1 ; j <= 8 ; j++){
            temp[i][j] = '.';
        }}
        temp[1][8] = 'A' ;
}

//void printIt(){
//    for(int i = 1 ; i <= 8 ; i ++){
//        for(int j = 1 ; j <= 8 ; j++){
//            cout << temp[i][j] << " " ;
//        }
//        cout << endl ;
//    }
//    cout << endl ;
//}

void dfs(int a , int b , int st){
    reset_temp();
    board_build(st);
    if(temp[a][b] == 'S'){
        return ;
    }
    if(temp[a][b] == 'A'){
        result = true ;
        return ;
    }
    for(int i = a-1 ; i <= a+1 ; i ++){
        for(int j = b+1 ; j >= b-1 ; j --){
            if(i< 1 || i > 8 || j < 1 || j > 8)
                continue ;
            if(visited[i][j])
                continue ;
            if(temp[i][j] == 'S')
                continue ;
            if(i-1 >= 1)
            if(temp[i-1][j] == 'S')
                continue ;
            if(result){
                return;}
            visited[i][j] = 1 ;
            dfs(i,j, st +1);
            reset_temp();
            board_build(st);
            }}}

int main()
{
    for(int i = 1 ; i <= 8 ; i ++){
        for(int j = 1 ; j <= 8 ; j ++){
            cin >> board[i][j] ;
            if(board[i][j] == 'S')
                s.push_back(make_pair(i,j));
            }}

    dfs(8,1 , 0);
    if(result){
       cout << "WIN" ;
       }
    else{
        cout << "LOSE" ;
    }
    return 0;
}
