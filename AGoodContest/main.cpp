#include <iostream>

using namespace std;

int main()
{
    int t ;
    cin >> t ;
    string x ;
    int num1 , num2 ;
    bool flag = false ;
    for(int i = 0 ; i < t ; i ++){
        cin >> x >> num1 >> num2 ;
        if(num1 >= 2400 && num2 > num1){
            flag = true ;
            break;}
    }
    if(flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
