#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int t , n1 , n2 , n3 ;
    scanf("%d",&t);
    for(int i = 1 ; i <= t ; i ++){
        scanf("%d %d %d",&n1 ,&n2 ,&n3);
        if(n1 >= n2 && n1 <= n3 ||n1 >= n3 && n1 <= n2)
            printf("Case %d: %d\n",i,n1);
        else if(n2 >= n1 && n2 <= n3 || n2 >= n3 && n2 <= n1)
            printf("Case %d: %d\n",i,n2);
        else if(n3 >= n2 && n3 <= n1 || n3 >= n1 && n3 <= n2)
            printf("Case %d: %d\n",i,n3);
    }
    return 0;
}
