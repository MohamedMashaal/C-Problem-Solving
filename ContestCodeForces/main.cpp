#include <iostream>

using namespace std;

int main()
{
    int n , a  , b ;
    cin >> n >> a >> b ;
    int cont = 0 ;
    for(int i = 0 ; i < n  ; i ++){
        int x ;
        cin >> x ;
        if(x == 1){
            if(a != 0)
                a -- ;
            else if(b !=0){
                b -- ;
                a ++;}
            else
                cont ++ ;
        }
        else{
            if(b !=0){
                b -- ;
                }
            else
                cont += x ;
        }

    }
    cout << cont << endl;
    return 0;
}
