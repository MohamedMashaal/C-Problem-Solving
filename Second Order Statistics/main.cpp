#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int n ;
    scanf("%d",&n);
    int min_1 = 111, min_2 = 111;
    int arr [n] ;
    for(int i = 0 ; i < n ; i++)
        scanf("%d", &arr[i]);
    for(int i = 0 ; i < n ; i ++)
        if(arr[i] < min_1)
            min_1 = arr[i];
    for(int i = 0 ; i < n ; i ++)
        if(arr[i] < min_2 && arr[i] != min_1)
            min_2 = arr[i];
    if(min_2 != 111)
        printf("%d",min_2);
    else
        printf("NO");
    return 0;
}
