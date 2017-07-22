#include <iostream>

using namespace std;

int main()
{
    string x ;
    cin >> x ;
    int n ;
    cin >> n ;
    for(int i = 0 ; i < n ; i++){
        int from , to , coun = 0 ;
        cin >> from >> to ;
        from -- ;
        to -- ;
        for(int z = from ; z < to ; z ++){
            if(x.at(z)== x.at(z+1))
                coun ++ ;
        }
        cout << coun << endl ;
    }


    return 0;
}
