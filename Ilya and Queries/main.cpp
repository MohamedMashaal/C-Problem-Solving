#include <iostream>

using namespace std;
int sol [100002] ;
int main()
{
    string x ;
    cin >> x ;
    for(int i = x.length()-1 ; i >=1 ; i -- ){
        if(x.at(i-1) == x.at(i)){
            sol[i] = sol[i+1]+1 ;
        }
        else{
            sol[i] = 0 ;
        }
    }
    for(int i = 1 ; i <= x.length() ; i ++){
        cout << sol[i] << " " ;
    }
    cout << endl ;
    int t ;
    cin >> t ;
    for(int i = 0 ; i < t ; i++){
        int f , k ;
        cin >> f >> k ;
        cout << sol[f]-sol[k]  << endl ;
    }
    return 0;
}
