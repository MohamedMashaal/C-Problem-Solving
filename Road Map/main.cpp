#include <iostream>
#include <cstdio>
using namespace std;


int main()
{   int n , z , s ;
    scanf("%d %d %d",&n,&z,&s);
    int road [n+1] = {0} ;
    for(int i = 1 ; i <= n ; i++){
        if(i == z )
            continue ;
        else
            cin >> road[i] ;
        }
    int temp = road[s];
    int temp2 ;
    road[s] = 0 ;
        while(temp !=0){
            temp2 = road[temp] ;
            road[temp] = s ;
            s = temp ;
            temp = temp2 ;
        }
    for(int i = 1 ; i <= n ; i ++){
        if(road[i] == 0){
            continue ;
            }
        cout << road[i] << " " ;
    }

    return 0;
}
