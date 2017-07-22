#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    float H , U , D , F , Un ;
    float distance ;
    float daysCounter ;
    while(scanf("%f %f %f %f",&H ,&U , &D ,&F),H){
        daysCounter = 0 ;
        distance = 0 ;
        while(distance < H && distance >= 0 ){
            daysCounter ++ ;
            Un = U -(U*(daysCounter-1)*F/100);
            if(Un < 0)
                Un = 0 ;
            distance += Un ;
            if(distance > H)
                break ;
            distance -= D ;
        }
        if(distance > H)
            printf("success on day %d\n",(int)daysCounter);
        else
            printf("failure on day %d\n",(int)daysCounter);
    }
    return 0;
}
