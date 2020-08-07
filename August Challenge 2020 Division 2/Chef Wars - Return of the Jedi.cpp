#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T, P, H, temp;
    bool won;

    cin >> T;

    while (T)
    {
        cin >> H >> P;
        temp = P;
        won = false;
        while (temp)
        {
            H -= temp;
            temp = temp >> 1;
            if (H <= 0)
            {
                cout << 1 << endl;
                won = true;
                break;
            }
        }
        if (!won)
        {
            cout << 0 << endl;
        }
        T--;
    }
}