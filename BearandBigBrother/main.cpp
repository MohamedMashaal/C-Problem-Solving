#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int a , b , year = 0 ;
    scanf("%d %d", &a,&b);
    while (a <= b){
        a *= 3 ;
        b *= 2 ;
        year ++ ;
    }
    cout << year << endl ;
    return 0;
}
