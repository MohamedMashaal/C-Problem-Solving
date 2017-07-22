#include <iostream>
#include <cstdio>

using namespace std;

int gcd(int a , int b){
    if(b == 0)
        return a ;
    else{
        return gcd(b , a%b);
    }
}

int main()
{
    int x , y , result ;
    scanf("%d %d",&x , &y);
    if(x > y)
        result = 6 - x + 1;
    else
        result = 6 - y + 1;
    printf("%d/%d",(result/gcd(result,6)),(6/gcd(result,6)));
    return 0;
}
