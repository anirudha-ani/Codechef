#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T ;
    scanf("%d" , &T);

    for(int i  = 0 ; i < T ; i ++ )
    {
        string X , Y;
        cin >> X;
        cin >> Y;

        int length = X.length();
        bool flag = true;
        for(int i = 0 ; i < length ; i++)
        {
            if(X[i] == '?' || Y[i] == '?')
                continue;
            else if(X[i] != Y[i])
            {
                flag = false;
                break;
            }
        }
        if(flag)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }

    }

    return 0;
}
