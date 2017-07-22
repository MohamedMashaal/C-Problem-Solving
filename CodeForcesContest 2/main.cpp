#include <iostream>

using namespace std;

int main()
{
    int n , m ;
    cin >> n >> m ;
    char thex [n+1][m+1];
    pair<int , int > temp (0,0) ;
    pair <int , int > temp2 (0,0);
    int cnt = 0 ;
        for(int i = 1 ; i <= n ; i ++){
            for(int j = 1 ; j <= m ; j++){
                char x ;
                cin >> x ;
                if(x == 'B'){
                    if(!cnt){
                        temp.first = i ;
                        temp.second = j ;
                        cnt ++ ;
                        }
                    else{
                    temp2.first = i;
                    temp2.second = j;
                    cnt ++ ;}}
            }}
        if(temp.first == temp2.first && temp.second == temp2.second && temp.first != 0)
            cout << 0 ;
        else if(!cnt){
            cout << 1 ;}
        else {
            int x = temp2.first - temp.first +1 ;
            int y = temp2.second - temp.second + 1;
            int res = max(x , y);
            if(res >  n || res > m)
                cout << -1 ;
            else{
                int result = (res * res) - cnt ;
                cout << result ;
            }
        }

    return 0;
}
