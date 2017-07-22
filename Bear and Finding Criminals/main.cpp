#include <iostream>

using namespace std;

int main()
{
    int length = 0 , index = 0;
    cin >> length >> index ;
    index -- ;
    int counter = max(index , length-1-index);
    int criminals [length];
    for(int i = 0 ; i < length ; i ++)
       cin >> criminals[i] ;
    int cot = 0 ;
    for(int i = 0 ; i <= counter ; i ++ ){
        if(index-i >=0  && index+i <length){
            if(criminals[index-i] == 1 && criminals[index+i] == 1){
                if(i == 0){
                    cot ++;}
                else{
                    cot += 2 ;
            }}}
        else if(index-i < 0){
            if(criminals[index+i] == 1){
            cot ++ ;}}
        else if(index+i >= length){
            if(criminals[index-i] == 1){
            cot ++ ;}}
    }
    cout << cot << endl ;
    return 0;
}
