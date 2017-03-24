#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    long long int T , N , x , M , A[100005] , input , answer , combi;

    scanf("%lld", &T);

    for(int k = 0 ; k < T ; k++)
    {
        answer = 0;
        scanf("%lld %lld %lld", &N , &x , &M);

        for(int i = 1 ; i <= N ; i++)
        {
            scanf("%lld", &input);
            A[i] = input % 1000000007 ;

        }
        M = M-1;
        answer = (A[x]+(A[x-1] * ((M+1)%1000000007))%1000000007)%1000000007;
        combi = (M+1)%1000000007;
        //cout << answer << endl;
        //cout << "Combi " << combi << endl;
        for(int i = x-2 , j = 2 ; i> 0 ; i-- , j++)
        {
            combi  = (combi*((M+j)%1000000007)/j)%1000000007;

            answer = (answer+((A[i] * combi)% 1000000007))%1000000007;

        }

        printf("%lld\n", answer);


    }
    return 0;
}
