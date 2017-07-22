#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
#include <fstream>


using namespace std;
typedef vector< int > vi ;
int forest [2001*2001];
int visited [2001*2001];
int n , m ;


void bfs(int po){
    queue <int> q ;
    q.push(po);
    int temp ;
    visited[po] = 1 ;
    while(!q.empty()){
        temp = q.front();
        q.pop();
        int p1 , p2 , p3 , p4 ;
        p1 = temp - m ;
        p2 = temp + m ;
        if((temp-1)%m != 0){
            p3 = temp - 1 ;}
        else
        {
            p3 = -1 ;
        }
        if(temp%m != 0){
            p4 = temp + 1 ;}
        else{
            p4 = -1 ;
        }
        if(!visited[p1] && p1 >=1 && p1 <= m*n){
            q.push(p1);
            visited[p1] = 1 ;
            if(forest[p1] > forest [temp] + 1)
                forest[p1] = forest [temp] + 1 ;
        }
        if(!visited[p2] && p2 >=1 && p2 <= m*n){
            q.push(p2);
            visited[p2] = 1 ;
            if(forest[p2] > forest [temp] + 1)
                forest[p2] = forest [temp] + 1 ;
        }
        if(!visited[p3] && p3 >=1 && p3 <= m*n){
            q.push(p3);
            visited[p3] = 1 ;
            if(forest[p3] > forest [temp] + 1)
                forest[p3] = forest [temp] + 1 ;
        }
        if(!visited[p4] && p4 >=1 && p4 <= m*n){
            q.push(p4);
            visited[p4] = 1 ;
            if(forest[p4] > forest [temp] + 1)
                forest[p4] = forest [temp] + 1 ;
        }
                    }
    return ;
}

    void set_to_zero(){
        for(int i = 1 ; i <= n*m ; i ++)
                visited[i] = 0 ;
        }
   int getMax(){
        int index , maxNum = -10 ;
        for(int i = 1 ; i <= n*m ; i ++)
                if(forest[i] > maxNum ){
                    index = i ;
                    maxNum = forest[i];
                }
        return index;
    }
    printIt(){
        cout << endl ;
        for(int i = 1 ; i <= n*m ; i ++){
            cout << forest[i] << " ";
            if(i % m == 0)
                cout << endl ;}

    }


int main()
{
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    //scanf("%d %d",&n,&m);
    fin >> n >> m ;
    for(int i = 1 ; i <= n* m ; i ++)
            forest[i] = 100000 ;
    int k ;
    //scanf("%d",&k);
    fin >> k ;
    vi points ;
    int x , y ;
    for(int i = 0 ; i < k ; i++){
        //scanf("%d %d" , &x ,&y);
        fin >> x >> y ;
        forest[(x-1)*m+y] = 0 ;
        points.push_back((x-1)*m+y);
        }
    for(int i = 0 ; i < k ; i ++){
        set_to_zero();
        bfs(points[i]);
        //printIt();
      //  cout << endl ;
        }
    //printIt();
    //cout << endl ;
    int point = getMax();
    //cout << point << endl ;
    if(point%m == 0){
        fout << point/m << " " << m ;
        //printf("%d %d",(point/(m +1) )+1 , point%(m +1));
    }
    else
        fout << (point/m) +1 << " " << point%m ;
    //printf("%d %d",(point/m )+1 , point%m);
    return 0;
}
