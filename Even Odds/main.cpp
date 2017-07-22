#include <iostream>

using namespace std;

int main()
{
    long long n , k ;
    cin >> n >> k ;
    if(k == n && n%2 == 0){
        cout << k << endl ;
    }
    else if (k > (n/2+n%2))
        cout << k%(n/2+n%2) *2 << endl ;
    else {
        cout << k * 2 - 1 << endl ;
    }
    return 0;
}
